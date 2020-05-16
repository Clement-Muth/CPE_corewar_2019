/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool check_mnemonique(char *str)
{
    for (int i = 0; 0 != op_tab[i].mnemonique; ++i)
        if (0 == m_strcmp(str, op_tab[i].mnemonique))
            return (true);
    m_putstr("Wrong isntruction (mnemonique)\n", 2);
    return (false);
}

static void my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != src[n]) {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
}

static char *find_mnemonique(char *line)
{
    int index = 0;
    char *mnemonique = NULL;

    for (int i = 0; line[i]; ++i)
        if (' ' == line[i]) {
            index = i;
            break;
        }
    if (0 == index) {
        m_putstr("Wrong instruction format\n", 2);
        return (NULL);
    }
    mnemonique = malloc(sizeof(char) * (index + 1));
    if (NULL == mnemonique)
        return (NULL);
    my_strncpy(mnemonique, line, index);
    return (mnemonique);
}

char *get_mnemonique(char *line)
{
    char *new = find_mnemonique(line);

    if (NULL == new)
        return (NULL);
    if (false == check_mnemonique(new)) {
        free(new);
        return (NULL);
    }
    return (new);
}
