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
    if (init_champion(vm, ac, av))
        return(false);
    return (true);
}

static bool process(vm_t *vm)
{
    //fight_process(vm);
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

    if (error(ac, av))
        return (false);
     printf("It's not a .cor file\n");
    if (init(&vm, ac, av))
        return (false);
    if (process(&vm))
        return (false);
    return (true);
}

int main(const int ac, char *const restrict *const restrict av,
    char *const restrict *const restrict env)
{
    if (env == NULL) {
        printf("can't read env");
        return (84);
    }
    return (vm(ac, av)) ? (0) : (84);
}
