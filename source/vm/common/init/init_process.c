/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

static bool is_a_correct_file(char *string)
{
    if (string[m_strlen(string) - 1] == 'r' &&
        string[m_strlen(string) - 2] == 'o' &&
        string[m_strlen(string) - 3] == 'c' &&
        string[m_strlen(string) - 4] == '.') {
        return (true);
    }
    return (false);
}

static bool process_constructor(vm_t *vm,
    char *const restrict path)
{
    int fd = open(path, O_RDONLY);

    if (fd == -1) {
        printf("Cannot access to the file\n");
        return (false);
    }
}

bool init_process(vm_t *vm, const int ac,
    char *const restrict *const restrict av)
{
    for (int i = 1; i != ac; i++) {
        if (is_a_correct_file(av[i]) == false ||
            process_constructor(vm, av[i]) == false)
            return (false);
    }
    return (true);
}