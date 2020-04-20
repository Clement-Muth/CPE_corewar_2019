/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** dist_roth
*/

#include "maths.h"

size_t _dist_roth(vector2i a, vector2i b)
{
    int x = _pow(b.x - a.x, 2);
    int y = _pow(b.y - a.y, 2);

    return (_sqrt(x + y));
}