/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static void find_types(char **args, int *type)
{
    int index = 0;

    for (int i = 0; args[i]; ++i) {
        if ('r' == args[i][0])
            type[index] = T_REG;
        else if (DIRECT_CHAR == args[i][0])
            type[index] = T_DIR;
        else 
            type[index] = T_IND;
        ++index;
    }
}

static char **get_args(char *line)
{
    int index = 0;
    char **new = NULL;

    for (int i = 0; line[i]; ++i)
        if (' ' == line[i])
            index = i;
    new = my_str_to_word_array(line + index + 1, SEPARATOR_CHAR);
    return (new);
}

int *get_types(char *name, char *line, int nb_arg)
{
    int *type = malloc(sizeof(int) * MAX_ARGS_NUMBER);
    char **args = get_args(line);

    if (NULL == args || NULL == type)
        return (NULL);
    for (int i = 0; MAX_ARGS_NUMBER > i; ++i)
        type[i] = -1;
    find_types(args, type);
    if (false == check_types(name, type)) {
        for (int i = 0; args[i]; ++i)
            free(args[i]);
        free(args);
        return (NULL);
    }
    for (int i = 0; args[i]; ++i)
        free(args[i]);
    free(args);
    return (type);
}
