/*
** EPITECH PROJECT, 2020
** _stat [WSL: Debian]
** File description:
** _stat_free
*/

#include "stat.h"

void _stat_free(stat_t *statf)
{
    free(statf->filepath);
    free(statf->name);
    free(FINFO.lineptr);
    if (complet == FINFO.info) {
        for (int i = 0; statf->content[i]; i++) free(statf->content[i]);
        free(statf->content);
    }
    free(statf);
}