/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** _strncpy
*/

#include "string.h"

char *_strncpy(const char *src, const char n)
{
    int length = _strlen((char *)src);
    char *dest = _memalloc(length);

    for (int i = 0; src[i] && n != src[i]; i++) dest[i] = src[i];
    return (dest);
}