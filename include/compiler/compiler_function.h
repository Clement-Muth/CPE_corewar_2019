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
header_t *init_header(void);
op_t **init_instructions(char **);
bool get_name_and_command(header_t *, char **);

#endif /* !COMPILER_FUNCTION_H_ */
