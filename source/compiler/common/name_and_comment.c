/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static char get_comment(header_t *header, char *line)
{
    if (m_strlen(line) > COMMENT_LENGTH) {
        m_putstr("Champion 's comment is too long\n", 2);
        return (false);
    }
    if ('\0' != header->comment[0]) {
        m_putstr("Name has already been set\n", 2);
        return (false);
    }
    m_strcpy(header->comment, line + 10);
    header->comment[m_strlen(line + 10) - 2] = '\0';
    return (true);
}

static char get_name(header_t *header, char *line)
{
    if (m_strlen(line) > PROG_NAME_LENGTH) {
        m_putstr("Champion's name is too long\n", 2);
        return (false);
    }
    if ('\0' != header->prog_name[0]) {
        m_putstr("Name has already been set\n", 2);
        return (false);
    }
    m_strcpy(header->prog_name, line + 7);
    header->prog_name[m_strlen(line + 7) - 2] = '\0';
    return (true);
}

static int get_command_index(char **buf)
{
    int index = -1;

    for (int i = 0; buf[i]; ++i) {
        if ('#' == buf[i][0])
            continue;
        if ('.' == buf[i][0])
            index = i;
        break;
    }
    return (index);
}

static bool find_name_and_comment(header_t *header, char **buf, int index)
{
    char *command[2] = {NAME_CMD_STRING, COMMENT_CMD_STRING};
    char (*get_infos[2])(header_t *, char *) = {get_name, get_comment};
    bool err = true;
    int rtn = 0;

    for (int i = index; buf[i]; ++i) {
        if (false == err || -1 == rtn)
            return (false);
        if ('.' != buf[i][0])
            break;
        rtn = check_command(buf[i]);
        if (-1 != rtn)
            err = get_infos[rtn](header, buf[i]);
    }
    return (true);
}

bool get_name_and_comment(header_t *header, char **buf)
{
    int index = get_command_index(buf);

    if (-1 == index) {
        m_putstr("Champions Wrong Format: No .name or .comment\n", 2);
        return (false);
    }
    if (false == find_name_and_comment(header, buf, index))
        return (false);
    if ('\0' == header->prog_name[0] || '\0' == header->comment[0]) {
        m_putstr("Champions Wrong format: Need comment and name\n", 2);
        return (false);
    }
    return (true);
}
