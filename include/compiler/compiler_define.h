/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** compiler_define
*/

#ifndef COMPILER_DEFINE_H_
#define COMPILER_DEFINE_H_

#define TYPE (char)instruction->type[i]
#define BIT (b - 1) * 8
#define CHECK_MNEMO(arg) ((arg != 1 && arg != 9 && arg != 12 && arg != 15) ? \
    (true) : (false))

#endif /* !COMPILER_DEFINE_H_ */