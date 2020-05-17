/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm
*/

#include "vm/vm.h"

static bool init(vm_t *vm, const int ac,
    char *const restrict *const restrict av)
{
    if (init_struct(vm) == false)
        return (false);
    if (init_champion(vm, ac, av) == false)
        return(false);
    if (init_process(vm, ac, av) == false)
        return (false);
    init_commande(vm->commande);
    if (init_ram(vm) == false)
        return (false);
    return (true);
}

static bool process(vm_t *vm)
{
    if (fight_process(vm) == false)
        return (false);
    return (true);
}

static bool error(const int ac, char *const restrict *const restrict av)
{
    if (ac < 2 || !av) {
        print_usage();
        return (false);
    }
    (void)av;
    return (true);
}

static bool vm(const int ac, char *const restrict *const restrict av)
{
    vm_t vm;

    if (error(ac, av) == false)
        return (false);
    if (init(&vm, ac, av) == false)
        return (false);
    if (process(&vm) == false)
        return (false);
    free_vm(&vm);
    return (true);
}

int main(const int ac, char *const restrict *const restrict av,
    char *const restrict *const restrict env)
{
    if (env == NULL) {
        m_putstr("can't read env", 1);
        return (84);
    }
    return (vm(ac, av)) ? (0) : (84);
}
