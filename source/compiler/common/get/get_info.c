/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static void my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != src[n]) {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
}

static char *get_string_between_char(char *line, char c)
{
    char *new = NULL;
    int start = -1;
    int end = -1;

    for (int i = 0; line[i]; ++i) {
        if (c != line[i])
            continue;
        if (-1 == start)
            start = i;
        else
            end = i;
    }
    new = malloc(sizeof(char) * (end - start));
    if (NULL == new)
        return (NULL);
    my_strncpy(new, line + start + 1, end - start - 1);
    return (new);
}

char *get_info(char *line)
{
    int nbr = 0;
    char *new = NULL;

    for (int i = 0; line[i]; ++i)
        if ('"' == line[i])
            ++nbr;
    if (2 != nbr) {
        m_putstr("Name and comment need to be in '""'\n", 2);
        return (NULL);
    }
    new = get_string_between_char(line, '"');
    return (new);
}