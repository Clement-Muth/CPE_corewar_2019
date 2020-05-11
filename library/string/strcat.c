/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** strcat
*/

#include "string.h"

char *m_strcat(char *str1, char *str2)
{
    int i = 0;
    int i2 = 0;

    if (!str1) return (NULL);
    while (str1[i]) i++;
    while (str2[i2]) {
        str1[i] = str2[i2];
        i++;
        i2++;
    }
    str1[i] = '\0';
    return (str1);
}