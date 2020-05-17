/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm
*/

#include "vm/vm.h"

void free_vm(vm_t *vm)
{
    for (int i = 0; i < vm->data->nbr_champ; ++i)
        free(vm->data->champ[i].instruction);
    free(vm->ram->ram);
    free(vm->ram->memory_prio);
    free(vm->data);
    free(vm->ram);
    free(vm->commande);
}
