/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** fread
*/

#include "stat.h"

bool _fread(const char *restrict filepath)
{
    stat_t *statf = _stat(filepath, DEFAULT, complet);

    if (!statf) return (false);
    for (int i = 0; statf->content[i]; i++) _putstr(statf->content[i], 1);
    _stat_free(statf);
    return (true);
}