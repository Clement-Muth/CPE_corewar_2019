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

static bool get_header_file(int fd, champion_t *champ)
{
    if (read(fd, &champ->file, sizeof(header_t)) < 0) {
        printf("There is a probleme whit you header\n");
        return (false);
    }
    get_global_int(champ);
    if (champ->file.prog_size > MEM_SIZE / 4) {
        printf("The size of the .cor file is to large.\n");
        return (false);
    }
    return (true);
}

static bool get_instruction_file(int fd, champion_t *champ)
{
    if (read(fd, &champ->instruction, champ->file.prog_size) < 0) {
        printf("There is a probleme whit you instructions\n");
        return (false);
    }
    return (true);
}

static bool process_constructor(vm_t *vm,
    char *const restrict path, int i)
{
    int fd = open(path, O_RDONLY);

    if (fd == -1) {
        printf("Cannot access to the file\n");
        return (false);
    }
    if (get_header_file(fd, vm->data->champ) == false)
        return (false);
    if (get_instruction_file(fd, vm->data->champ) == false)
        return (false);
    close(fd);
    return (true);
}

bool init_process(vm_t *vm, const int ac,
    char *const restrict *const restrict av)
{
    for (int i = 1; i != ac; i++) {
        if (is_a_correct_file(av[i]) == false ||
            process_constructor(vm, av[i], i) == false)
            return (false);
    }
    return (true);
}