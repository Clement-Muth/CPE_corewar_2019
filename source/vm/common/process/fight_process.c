/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm_define
*/

#include "vm/vm.h"

static bool launch_attaque(champion_t *champ, vm_t *vm)
{
    return (true);
}

static bool run_cycle(vm_t *vm)
{
    for (int i = 0; i > vm->data->nbr_champ; ++i)
        if (launch_attaque(&vm->data->champ[i], vm) == false)
            return (false);
    return (true);
}

static void print_winner(champion_t *champ, int total_alive)
{
    int i;

    for (i = 0; i < total_alive; ++i) {
        if (champ[i].alive == 1)
            break;
        printf("D'accord chef = %d\n", champ[i].alive);
    }
    m_putstr("The player ", 1);
    m_putchar(i + 49, 1);
    m_putstr("(", 1);
    m_putstr(champ[i].file.prog_name, 1);
    m_putstr(")", 1);
    m_putstr("has won.\n", 1);
}

static bool is_finish(champion_t *champ, int total_alive)
{
    int count = 0;

    for (int i = 0; i < total_alive; ++i)
        if (champ[i].alive == 1)
            count++;
    if (count <= 1)
        return (true);
    else
        return (false);
}

bool fight_process(vm_t *vm)
{
    for (int i = CYCLE_TO_DIE; i > 0; i -= CYCLE_DELTA) {
        for (int j = 0; j != CYCLE_TO_DIE; j++) {
            if (run_cycle(vm) == false)
                break;
        }
        if (is_finish(vm->data->champ, vm->data->nbr_champ) == true)
            break;
    }
    print_winner(vm->data->champ, vm->data->nbr_champ);
    return (true);
}