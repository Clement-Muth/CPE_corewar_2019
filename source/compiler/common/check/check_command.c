/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static int my_strncmp(char const *s1, char const *s2, int n)
{
    int number = 0;

    while (s1[number] != s1[n]) {
        if (s1[number] > s2[number])
            return (1);
        if (s1[number] < s2[number])
            return (-1);
        ++number;
    }
    return (0);
}

static int get_index_command(char *line)
{
    int index = -1;

    for (int i = 0; line[i]; ++i)
        if (' ' == line[i])
            index = i;
    return (index);
}

int check_command(char *line)
{
    int index = get_index_command(line);
    char *command[2] = {NAME_CMD_STRING, COMMENT_CMD_STRING};
    int current = -1;

    if (-1 == index) {
        m_putstr(".name and .comment need an argument\n", 2);
        return (-1);
    }
    for (int i = 0; 2 > i; ++i)
        if (0 == my_strncmp(line, command[i], index)) {
            current = i;
        }
    if (-1 == current) {
        m_putstr("The only command are .name and .comment\n", 2);
        return (-1);
    }
    return (current);
}
