/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** _strnlcpy
*/

#include "string.h"

size_t _strllen(const char *restrict string, const char beg)
{
    int i = 0;

    while (beg != string[i]) i++;
    return (i + 1);
}

char *_strnlcpy(const char *restrict src, const char beg, char end)
{
    int n = 0;
    char *dest = _memalloc(_strlen((char *)src));
    char *csrc = _memalloc(_strlen((char *)src) - _strllen(src, beg));

    if (!dest || !csrc) return (NULL);
    for (int i = _strllen(src, beg); src[i]; i++, n++) csrc[n] = src[i];
    return (_memcpy(dest, csrc, _strlen((char *)csrc) + 1));
}