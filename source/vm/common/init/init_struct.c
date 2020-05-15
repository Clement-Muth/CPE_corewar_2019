/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

static bool init_data(vm_t *vm)
{
    vm->data = malloc(sizeof(data_t));
    vm->commande = malloc(sizeof(commande_t));
    vm->data->nbr_champ = 0;
    return (true);
}

bool init_struct(vm_t *vm)
{
    if (init_data(vm) == false)
        return (false);
    return (true);
}