/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include <stddef.h>
#include "compiler/compiler.h"

static bool run(char *file)
{
    stat_t *stat = m_stat(file, DEFAULT, complet);
    op_t *champion = NULL;
    header_t *header = NULL;

    if (NULL == stat)
        return (false);
    return (true);
}

static void print_help(char *name)
{
    m_putstr("USAGE\n\t", 1);
    m_putstr(name, 1);
    m_putstr(" file_name[.s]\n\n", 1);
    m_putstr("DESCRIPTION\n\t", 1);
    m_putstr("file_name\tfile in assembly language to be converted into ", 1);
    m_putstr(" file_name.cor, an executable in the Virtual Machine.\n", 1);
}

static bool check_arguments(int ac, char *av[])
{
    int pos = -1;

    if (2 != ac) {
        m_putstr("./asm need one argument only\n", 2);
        return (false);
    }
    if (true == m_strcmp("-h", av[1]))
        return (true);
    for (int i = 0; av[1][i]; ++i)
        if ('.' == av[1][i])
            pos = i;
    if (-1 == pos || false == m_strcmp(av[1] + pos, ".s")) {
        m_putstr("Argument must be in assembler[.s]\n", 2);
        return (false);
    }
    return (true);
}

int main(int argc, char *argv[])
{
    if (false == check_arguments(argc, argv))
        return (84);
    if (true == m_strcmp("-h", argv[1])) {
        print_help(argv[0]);
        return (0);
    }
    if (false == run(argv[1]))
        return (84);
    return (0);
}
