/*
** EPITECH PROJECT, 2020
** _stat [WSL: Debian]
** File description:
** _strcpy
*/

#include "string.h"

char *_strcpy(char *restrict dest, const char *restrict src)
{
    return (_memcpy(dest, src, _strlen((char *)src) + 1));
}