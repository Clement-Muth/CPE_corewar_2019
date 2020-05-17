/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

static void set_ram(void *tmp, char c)
{
    char *buf = tmp;

    for (int i = 0; i < MEM_SIZE; ++i)
        buf[i] = c; 
}

static bool init_ram_struct(ram_t *ram)
{
    ram->ram = malloc(sizeof(unsigned char) * MEM_SIZE);
    if (ram->ram == NULL) {
        m_putstr("Fail to malloc RAM\n", 1);
        return (false);
    }
    ram->memory_prio = malloc(sizeof(char) * MEM_SIZE);
    if (ram->ram == NULL) {
        m_putstr("Fail to malloc MEMORY\n", 1);
        return (false);
    }
    set_ram(ram->ram, 0);
    set_ram(ram->memory_prio, -1);
    return (true);
}

static bool prepare_champ(champion_t *champ, ram_t *ram, int total_champ)
{
    for (int i = 0; i != total_champ; ++i) {
        for (int j = -1 ; j < champ[i].file.prog_size; j++) {
            ram->ram[j + champ[i].pc_pos] = champ[i].instruction[j];
            ram->memory_prio[j + champ[i].pc_pos] = i;
        }
    }
    return (true);
}

bool init_ram(vm_t *vm)
{
    if (init_ram_struct(vm->ram) == false)
        return (false);
    if (prepare_champ(vm->data->champ, vm->ram, vm->data->nbr_champ)
        == false)
        return (false);
    return (true);
}