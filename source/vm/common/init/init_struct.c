/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

static bool malloc_struct(vm_t *vm)
{
    vm->data = malloc(sizeof(data_t) * 4);
    if (vm->data == NULL) {
        printf("Fail to malloc Data Struct\n");
        return (false);
    }
    vm->ram = malloc(sizeof(ram_t));
    if (vm->ram == NULL) {
        printf("Fail to malloc RAM Struct\n");
        return (false);
    }
    vm->commande = malloc(sizeof(commande_t) * 15);
    if (vm->commande == NULL) {
        printf("Fail to malloc Commande Struct\n");
        return (false);
    }
    return (true);
}

static void init_struct_data(vm_t *vm)
{
    vm->data->nbr_champ = 0;
}

bool init_struct(vm_t *vm)
{
    if (malloc_struct(vm) == false)
        return (false);
    init_struct_data(vm);
    return (true);
}