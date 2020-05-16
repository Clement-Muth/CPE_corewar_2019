/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** write_header
*/

#include "compiler/compiler.h"
#define PN_LEN m_strlen(header->prog_name)
#define COM_LEN m_strlen(header->comment)
#define EMPTY "\0\0\0\0\0\0\0\0"

static void swap_char(unsigned char *a, unsigned char *b)
{
    unsigned char tmp = *a;

    *a = *b;
    *b = tmp;
}

static void swap(unsigned int *to_swap)
{
    unsigned char *pt = (unsigned char *)to_swap;

    swap_char(pt, pt + 3);
    swap_char(pt + 1, pt + 2);
}

static int print_magic(fd_t fd)
{
    int magic = COREWAR_EXEC_MAGIC;

    swap(&magic);
    return (magic);
}

static void write_blank(fd_t fd, int lim, int size)
{
    for (int l = size; l <= lim; l++) write(fd, "\0", 1);
}

static void print_header(header_t *header, fd_t fd)
{
    // write_blank(fd, PROG_NAME_LENGTH, PN_LEN);
    printf("%p\n", header);
    write(fd, header, sizeof(header_t));
    write(fd, EMPTY, 7);
}

bool write_header(header_t *header, fd_t fd)
{
    header->prog_size = 50; // Don't forget to replace by function get_size();
    header->magic = print_magic(fd);
    print_header(header, fd);
    return (true);
}