/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** free
*/

#include "string.h"

void m_free(char **var)
{
    if (!var)
        return;
    for (int i = 0; var[i]; i++)
        free(var[i]);
    free(var);
}