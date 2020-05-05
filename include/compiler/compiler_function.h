/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** compiler_function
*/

#ifndef COMPILER_FUNCTION_H_
#define COMPILER_FUNCTION_H_

/*          error           */
bool error(const int ac, char *const __restrict__ *const __restrict__ av);

/*          init            */
bool init(compiler_t *cmp);

#endif /* !COMPILER_FUNCTION_H_ */