/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** printt
*/

#include "string.h"

void printt_string(char **array, bool jump)
{
    for (int i = 0; array[i]; i++) {
        _putstr(array[i], 1);
        if (jump) _putchar('\n', 1);
    }
}

void printt_number(int *array)
{
    for (int i = 0; array[i]; i++)
        _putnbr(array[i], 1);
}

void _printt(const char *restrict format, const void *array, bool jump)
{
    if (_strcmp(format, "%s")) printt_string((char **)array, jump);
    else if (_strcmp(format, "%d")) printt_number((int *)array);
}