/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** putnbr
*/

#include "string.h"

void _putnbr(int number, const int fd)
{
    if (0 > number) {
        _putchar('-', fd);
        number = -number;
    }
    if (10 <= number) {
        _putnbr(number / 10, fd);
        _putchar(number % 10 + '0', fd);
    }
    if (10 > number) _putchar(number % 10 + '0', fd);
}