/*
** EPITECH PROJECT, 2020
** _stat [WSL: Debian]
** File description:
** _strdup
*/

#include "string.h"

char *_strdup(const char *src)
{
    void *new = _memalloc(_strlen((char *)src) + 2);
    char *cdest = new;
    const char *csrc = src;

    if (!new) return (NULL);
    cdest = _strcpy(cdest, csrc);
    return ((char *)new);
}