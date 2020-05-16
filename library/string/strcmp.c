/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** strcp
*/

#include "string.h"

bool m_strcmp(const char *restrict comparing, const char *restrict compared)
{
    if (m_strlen((char *)comparing) != m_strlen((char *)compared))
        return (false);
    for (int i = 0; comparing[i]; i++)
        if (comparing[i] != compared[i]) return (false);
    return (true);
}