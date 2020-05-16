/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** m_strcat
*/

#include "string.h"

char *m_strcat(char *str1, char *str2)
{
    int i = 0;
    int j = 0;

    if (!str1) return (NULL);
    while (str1[i]) i++;
    while (str2[j]) {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    return (str1);
}