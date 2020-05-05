/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm
*/

#include "vm/vm.h"

static bool vm(const int ac, char *const restrict *const restrict av)
{
    vm_t vm;

    // return ((error(ac, av) && init(&vm) && process(&vm))
    // ? (true) : (false));
}

int main(const int ac, char *const restrict *const restrict av)
{
    return (vm(ac, av)) ? (0) : (84);
}