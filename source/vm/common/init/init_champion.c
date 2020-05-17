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

    for (int i = 1; i < ac; ++i) {
        if (av[i][m_strlen(av[i]) - 1] == 'r' &&
            av[i][m_strlen(av[i]) - 2] == 'o' &&
            av[i][m_strlen(av[i]) - 3] == 'c' &&
            av[i][m_strlen(av[i]) - 4] == '.') {
            vm->data->nbr_champ++;
        }
    }
    if (vm->data->nbr_champ < 2) {
        m_putstr("It's enough champions\n", 1);
        return (false);
    } else if (vm->data->nbr_champ > 4) {
        m_putstr("Is must be maximum 4 champions\n", 1);
        return (false);
    }
    return (true);
}

static bool init_one_champ(champion_t champ)
{
    champ.alive = 0;
    champ.file.prog_size = 0;
    champ.file.magic = 0;
    return (true);
}

bool init_champion(vm_t *vm, const int ac,
    char *const restrict *const restrict av)
{
    if (count_champion(vm, ac, av) == false)
        return (false);
    for (int i = 0; i != vm->data->nbr_champ; ++i) {
        if (init_one_champ(vm->data->champ[i]) == false)
            return (false);
        vm->data->champ[i].pc_pos = (MEM_SIZE / vm->data->nbr_champ) * i;
    }
    return (true);
}