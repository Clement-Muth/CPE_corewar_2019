/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** write_header
*/

#include "compiler/compiler.h"

static int print_magic(fd_t fd)
{
    int magic = COREWAR_EXEC_MAGIC;

    swap(&magic, fd);
    return (magic);
}

static void print_size(fd_t fd)
{
    int size = 0x13;

    swap(&size, fd);
}

static void write_blank(fd_t fd, int lim, int size)
{
    for (int l = size; l <= lim; l++)
        write(fd, "\0", 1);
}

static void print_header(header_t *header, fd_t fd)
{
    print_magic(fd);
    write(fd, header->prog_name, m_strlen(header->prog_name));
    write_blank(fd, PROG_NAME_LENGTH - 1, 1);
    print_size(fd);
    write(fd, header->comment, m_strlen(header->comment));
    write_blank(fd, COMMENT_LENGTH, 1);
}

bool write_header(header_t *header, fd_t fd)
{
    print_header(header, fd);
    return (true);
}