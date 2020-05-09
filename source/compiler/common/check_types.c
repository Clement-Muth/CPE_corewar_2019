/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool check_other_values(int index, int *type, int i)
{
    int value = 0;
    int values[3] = {3, 6, 5};
    int solo_values[3][2] = {{T_REG, T_DIR}, {T_DIR, T_IND}, {T_REG, T_IND}};

    for (int s = 0; 3 > s; ++s)
        if (op_tab[index].type[i] == values[s])
            value = s;
    if (solo_values[value][0] != type[i] && solo_values[value][1] != type[i]) {
        m_putstr("Wrong Champion Format (wrong argument spot)\n", 2);
        return (false);
    }
    return (true);
}

static bool check_value(int index, int *type, int i)
{
    int value = op_tab[index].type[i];

    if (7 == value)
        return (true);
    if (T_REG == value || T_DIR == value || T_IND == value) {
        if (type[i] == value)
            return (true);
        m_putstr("Wrong Champion Format (wrong argument spot)\n", 2);
        return (false);
    }
    if (false == check_other_values(index, type, i))
        return (false);
    return (true);
}

bool check_types(char *name, int *type)
{
    int index = 0;

    for (int i = 0; 0 != op_tab[i].mnemonique; ++i)
        if (0 == m_strcmp(name, op_tab[i].mnemonique))
            index = i;
    for (int i = 0; MAX_ARGS_NUMBER > i; ++i) {
        if (-1 == type[i])
            continue;
        if (false == check_value(index, type, i))
            return (NULL);
    }
    return (true);
}
