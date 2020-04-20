/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** _pow
*/

#include "maths.h"

int _pow(int nb , int p)
{
    if (p <= 1)
        return nb;
    return (nb * _pow(nb, p - 1));
}