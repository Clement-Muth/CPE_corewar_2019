/*
** EPITECH PROJECT, 2020
** _stat [WSL: Debian]
** File description:
** fopen
*/

#include "stat.h"

FILE *_fopen(const char *restrict filepath)
{
    FILE *stream = NULL;

    if (!(stream = fopen(filepath, "r"))) {
        _putstr("failed to load file. Check the filepath\n", 2);
        return (NULL);
    }
    return (stream);
}