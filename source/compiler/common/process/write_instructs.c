/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** write_intruct
*/

#include "compiler/compiler.h"
#define TYPE (char)instruction->type[i]
#define BIT (b - 1) * 8
#define CHECK_MNEMO(arg) ((arg != 1 && arg != 9 && arg != 12 && arg != 15) ? \
    (true) : (false))

static int get_mnemonique_id(char *mnemonique)
{
    int i = 0;

    for (i = 0; op_tab[i].mnemonique; i++) {
        if (m_strcmp(op_tab[i].mnemonique, mnemonique)) return (i + 1);
    }
    return (i + 1);
}

void param_write(int n, int b, fd_t fd)
{
    unsigned char ret = '\0';

    printf("%d, %d\n", n, b);
    printf("%d\n", BIT);
    for (int i = 0, d = BIT; b > i ; i++, d -= 8) {
        ret = n >> d;
        printf("%d = %d >> %d\n", ret, n, d);
        write(fd, &ret, 1);
    }
}

static void param_convert(op_t *instruction, fd_t fd)
{
    char tmp[3];
    unsigned char ret_tmp = 0;
    int i = 0;

    for (i = 0; 3 > i && TYPE != -3; i++) {
        printf("type = %d\n", TYPE);
        tmp[i] = ((TYPE == T_REG) ?
        (1) : (TYPE == T_DIR) ?
        (2) : (TYPE == T_IND) ?
        (3) : (0));
    }
    while (i < 3) tmp[i++] = 0;
    ret_tmp = ret_tmp | (tmp[0] << 6);
    ret_tmp = ret_tmp | (tmp[1] << 4);
    ret_tmp = ret_tmp | (tmp[2] << 2);
    printf("------------------------------------------%d\n", ret_tmp);
    write(fd, &ret_tmp, 1);
}

static bool write_arg(op_t *instruction, char *arg, fd_t fd, bool wpb)
{
    char **tmp_arg = separate_arg_value(arg);

    if (wpb) param_convert(instruction, fd);
    for (int i = 0; tmp_arg[i]; i++) {
        for (int i = 0; tmp_arg[i]; i++) printf("value = %s ", tmp_arg[i]);
        param_write(m_atoi(tmp_arg[i]),
        (TYPE == T_REG) ?
        (1) : (TYPE == T_IND) ?
        (2) : (4)
        , fd);
    }
}

bool write_instruct(op_t **instructions, char **args, fd_t fd)
{
    int mnemo_id = 0;

    for (int i = 0; instructions[i]; i++) {
        mnemo_id = get_mnemonique_id(instructions[i]->mnemonique);
        param_write(mnemo_id, 1, fd);
        write_arg(instructions[i], args[i], fd,
            (CHECK_MNEMO(mnemo_id) ? (true) : (false)));
    }
    return (true);
}