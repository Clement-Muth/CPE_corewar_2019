/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** swap
*/

#include "string.h"

static void swap_char(unsigned char *a, unsigned char *b, fd_t fd)
{
    unsigned char tmp = *a;

    *a = *b;
    *b = tmp;
    write(fd, a, 1);
    write(fd, b, 1);
}

void swap(unsigned int *to_swap, fd_t fd)
{
    unsigned char *pt = (unsigned char *)to_swap;

    swap_char(pt + 2, pt + 3, fd);
    swap_char(pt, pt + 1, fd);
}