/*
** EPITECH PROJECT, 2020
** CPE_corewar_bootstrap_2019 [WSL: Debian]
** File description:
** revstr
*/

#include "string.h"

void m_revstr(char *string, int length)
{
    unsigned char a;
    unsigned len = m_strlen(string);

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        a = string[i];
        string[i] = string[j];
        string[j] = a;
    }
}