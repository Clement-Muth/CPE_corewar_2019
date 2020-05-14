/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

static bool count_champion(vm_t *vm, const int ac,
    char *const restrict *const restrict av)
{
    int str_len = 0;
    int i = 0;

    for (int i = 0; i < ac; ++i) {
        if (av[i][m_strlen(av[i]) - 1] == 'r' &&
            av[i][m_strlen(av[i]) - 2] == 'o' &&
            av[i][m_strlen(av[i]) - 3] == 'c' &&
            av[i][m_strlen(av[i]) - 4] == '.') {
            vm->data->nbr_champ++;
            }
    }
    return (true);
}

bool init_champion(vm_t *vm, const int ac,
    char *const restrict *const restrict av)
{
    printf("It's not a .cor file\n");
    if (count_champion(vm, ac, av)) {
        printf("It's not a .cor file\n");
        return (false);
    }
    return (true);
}