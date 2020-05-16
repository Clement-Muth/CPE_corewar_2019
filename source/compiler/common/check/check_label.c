/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool check_char(char c)
{
    int nbr = 0;

    for (int i = 0; LABEL_CHARS[i]; ++i)
        if (c != LABEL_CHARS[i])
            ++nbr;
    if (0 == nbr)
        return (false);
    return (true);
}

static bool check_content_label(char *label)
{
    if (1 == m_strlen(label)) {
        m_putstr("Label must habe letters or number after\n", 2);
        return (false);
    }
    for (int i = 0; label[i]; ++i)
        if (false == check_char(label[i])) {
            m_putstr("Label must be composed of letters, numbers or '_'\n", 2);
            return (false);
        }
    return (true);
}

bool check_label(char *arg)
{
    int index = 0;

    for (int i = 0; arg[i]; ++i)
        if (LABEL_CHAR == arg[i]) {
            index = i;
            break;
        }
    if (false == check_content_label(arg + index))
        return (false);
    return (true);
}
