/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

static bool is_a_correct_file(char *const restrict string)
{
    if (string[m_strlen(string) - 1] == 'r' &&
        string[m_strlen(string) - 2] == 'o' &&
        string[m_strlen(string) - 3] == 'c' &&
        string[m_strlen(string) - 4] == '.') {
        return (true);
    }
    return (false);
}

static bool get_header_file(int const fd, champion_t *champ)
{
    if (read(fd, &champ->file, sizeof(header_t)) < 0) {
        m_putstr("There is a probleme whit you header\n", 1);
        return (false);
    }
    get_global_int(champ);
    if (champ->file.prog_size > MEM_SIZE / 4) {
        m_putstr("The size of the .cor file is to large.\n", 1);
        return (false);
    }
    return (true);
}

static bool get_instruction_file(int const fd, champion_t *champ)
{
    int size = champ->file.prog_size;
    int read_info = 0;

    champ->instruction = malloc(sizeof(unsigned char) * size + 1);
    if (champ->instruction == NULL) {
        m_putstr("Fail whit instruction malloc of you champion\n", 1);
        return (false);
    }
    read_info = read(fd, champ->instruction, size + 1);
    if (read_info == -1) {
        m_putstr("There is a probleme whit you instructions\n", 1);
        return (false);
    }
    return (true);
}

static bool process_constructor(champion_t *champ,
    char *const restrict path)
{
    int fd = open(path, O_RDONLY);

    if (fd == -1) {
        m_putstr("Cannot access to the file\n", 1);
        return (false);
    }
    if (get_header_file(fd, champ) == false)
        return (false);
    if (get_instruction_file(fd, champ) == false)
        return (false);
    close(fd);
    return (true);
}

bool init_process(vm_t *vm, const int ac,
    char *const restrict *const restrict av)
{
    int j = 0;

    for (int i = 1; i != ac; ++i)
        if (is_a_correct_file(av[i]) == false ||
            process_constructor(&vm->data->champ[j++], av[i]) == false)
            return (false);
    return (true);
}