/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

static bool init_data(vm_t *vm)
{
    vm->data = malloc(sizeof(vm_t));
    vm->data->nbr_champ = 0;
    return (true);
}

static bool init_struct_champion(vm_t *vm)
{
    /*for (int i = 0; i != 4; i++) {
        vm->data->champ[i] = malloc(sizeof(champion_t));
        if (vm->data->champ[i] == NULL) {
            printf("Malloc Erreur !!\n");
            return (false);
        }
    }*/
    return (true);
}

bool init_struct(vm_t *vm)
{
    if (init_data(vm) == false)
        return (false);
    if (init_struct_champion(vm) == false)
        return (false);
    return (true);
}