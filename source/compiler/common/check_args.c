/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool check_value(char *arg)
{
    for (int i = 0; arg[i]; ++i)
        if (!('0' <= arg[i] && '9' >= arg[i])) {
            m_putstr("Direct/Indirect must be composed of numbers ", 2);
            m_putstr("or labeb\n", 2);
            return (false);
        }
    return (true);
}

static bool check_direct_indirect(char *arg)
{
    bool (*ptr)(char *) = &check_value;

    for (int i = 0; arg[i]; ++i)
        if (LABEL_CHAR == arg[i])
            ptr = &check_label;
    if (false == ptr(arg))
        return (false);
    return (true);
}

static bool check_register(char *arg)
{
    int nbr = 0;

    if (1 == m_strlen(arg)) {
        m_putstr("Register must be composed of number\n", 2);
        return (false);
    }
    nbr = m_atoi(arg + 1);
    for (int i = 1; arg[i]; ++i)
        if (!('0' <= arg[i] && '9' >= arg[i])) {
            m_putstr("Register must be composed of number\n", 2);
            return (false);
        }
    if (REG_NUMBER < nbr || 0 == nbr) {
        m_putstr("Register must be betwwen 1 and 16\n", 2);
        return (false);
    }
    return (true);
}

bool check_args(char **args)
{
    bool rtn = true;

    for (int i = 0; args[i]; ++i) {
        if ('r' == args[i][0])
            rtn = check_register(args[i]);
        else
            rtn = check_direct_indirect(args[i]);
        if (false == rtn)
            return (rtn);
    }
    return (true);
}
