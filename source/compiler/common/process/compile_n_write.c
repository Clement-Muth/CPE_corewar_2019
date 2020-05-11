/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** compiler
*/

#include "compiler/compiler.h"

static fd_t m_fcreate(char *filepath, int flag, mode_t mode)
{
    fd_t fd = 0;

    return ((fd = open(filepath, flag, mode)) ? (fd) : (false));
}

static bool m_fwrite(fd_t fd, header_t *header)
{
    return ((write(fd, header, sizeof(header_t))) ? (true) : (false));
}

static bool m_fclose(fd_t fd)
{
    return ((close(fd)) ? (true) : (false));
}

bool compile_n_write(header_t *header, op_t **instuctions, char *filepath)
{
    char *filecore = m_strcat(m_strncpy(filepath, '.'), ".core");
    fd_t fd = m_fcreate(filecore, O_CREAT | O_WRONLY | O_TRUNC, 0666);

    return ((!fd || !m_fwrite(fd, header) || !m_fclose(fd)) ? (false) : (true));
}