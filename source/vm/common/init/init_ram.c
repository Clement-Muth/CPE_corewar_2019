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
        printf("Fail to malloc RAM\n");
        return (false);
    }
    set_ram(ram->ram, 0);
    return (true);
}

static bool prepare_ram(vm_t *vm)
{
    for (int i = 0; i < vm->data->nbr_champ; ++i) {
        printf("%d %d ", i, vm->data->nbr_champ);
        printf("%s\n", vm->data->champ[i].file.prog_name);
    }
    return (true);
}

bool init_ram(vm_t *vm)
{
    if (init_ram_struct(vm->ram) == false)
        return (false);
    if (prepare_ram(vm) == false)
        return (false);
    printf("%s\n", vm->data->champ[1].file.prog_name);
    return (true);
}