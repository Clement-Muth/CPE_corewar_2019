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

static void print_magic(fd_t fd)
{
    int margic[4];

    for (int i = 0, mag = COREWAR_EXEC_MAGIC; 4 != i; i++, mag >>= 8) {
        margic[i] = (unsigned char) mag;
        write(fd, &margic[i], 1);
    }
}

static void write_blank(fd_t fd, int lim, int size)
{
    for (int l = size; l <= lim; l++) write(fd, "\0", 1);
}

static void print_header(header_t *header, fd_t fd)
{
    printf("prog_name = %s\n", header->prog_name);
    write(fd, header->prog_name, PN_LEN);
    write_blank(fd, PROG_NAME_LENGTH, PN_LEN);
    write(fd, EMPTY, 8);
    write(fd, header->comment, COM_LEN);
    write_blank(fd, COMMENT_LENGTH, COM_LEN);
}

bool write_header(header_t *header, fd_t fd)
{
    header->magic = COREWAR_EXEC_MAGIC;
    header->prog_size = 50; // Don't forget to replace by function get_size();
    print_magic(fd);
    print_header(header, fd);
    write(fd, header, sizeof(header_t));
    return (true);
}