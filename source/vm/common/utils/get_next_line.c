/*
** EPITECH PROJECT, 2019
** Get_next_line
** File description:
** by Patrick Eiermann
*/

#include "vm/vm.h"

static char *copy_paste(char *str1, char *str2)
{
    int len;
    int i;

    if (str1 == NULL || str2 == NULL) return (NULL);
    for (len = 0; str1[len] != '\0'; len++);
    for (i = 0; str2[i] != '\0'; i++)
        str1[len + i] = str2[i];
    str1[len + i] = '\0';
    return (str1);
}

static int get_info(char **buffer, int fd)
{
    ssize_t i;

    *buffer = malloc(sizeof(char) * READ_SIZE);
    if (buffer == NULL) return (84);
    i = read(fd, *buffer, READ_SIZE);
    if (i == -1) return (84);
    (*buffer)[i] = 0;
    return (0);
}

static int get_res(char **buffer, char **res)
{
    ssize_t i;

    for (i = 0; i == 0 || *(*buffer - 1) != '\n'; i++) {
        if (**buffer == 0) break;
        (*res)[i] = **buffer;
        *buffer += 1;
    }
    return (i);
}

char *get_next_line(int fd)
{
    static char *buffer;
    char *res = malloc(sizeof(char) * READ_SIZE);
    ssize_t i = 0;

    if (fd == -1 || res == NULL) return (NULL);
    if (buffer == NULL || buffer[0] == 0)
        if (get_info(&buffer, fd) == 84) return (NULL);
    if (buffer[0] == 0 || buffer == NULL) return (NULL);
    i = get_res(&buffer, &res);
    if (res[i - 1] == '\n' && i != 0)
        res[i - 1] = 0;
    else
        copy_paste(res, get_next_line(fd));
    return (res);
}