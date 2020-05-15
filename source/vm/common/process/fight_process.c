/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm_define
*/

#include "vm/vm.h"

static void print_winner(vm_t const *vm)
{

}

/*static bool run_cycle(vm_t *vm)
{
    for (int i = 0; i > 1 ; ++i)
        if (launch_attaque(vm->data->champ[i]) == false)
            return (false);
    return (true);
}*/

bool fight_process(vm_t *vm)
{
    for (int i = CYCLE_TO_DIE; i > 0; i -= CYCLE_DELTA) {
        
    }
    //print_winner(vm);
    return (true);
}
