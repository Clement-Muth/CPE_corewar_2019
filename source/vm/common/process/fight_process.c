/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm_define
*/

#include "vm/vm.h"

static void print_winner(vm_t const restrict *vm)
{
    write();
}

static bool run_cycle(vm_t *vm)
{
    for (int i = 0; i > 1 ; ++i)
        if (launch_attaque(vm->data->champ[i]) == false)
            return (false);
    return (true);
}

void fight_process(vm_t *vm)
{
    int incrass = 1;

    for (int cycle = CYCLE_TO_DIE; cicle >= 0; ) {
        if (run_cycle(vm) == false)
            return (false);
        incrass++;
    }
    print_winner(vm);
    return (true)
}
