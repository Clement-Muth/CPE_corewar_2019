/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
** File description:
** init_stat
*/

#include "stat.h"

stat_t *_init_stat(stat_t *statf, const char *filepath, size_t nread,
type info)
{
    statf = malloc(sizeof(stat_t));
    FINFO.lineptr = NULL;
    FINFO.stream = NULL;
    FINFO.nline = 0;
    FINFO.nread = nread;
    FINFO.info = info;
    statf->content = NULL;
    statf->filepath = _strdup(filepath);
    statf->name = NULL;
    statf->nline = 0;
    return (statf);
}