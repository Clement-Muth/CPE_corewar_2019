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
bool get_champions_informations(op_t **, header_t *, char **);
bool get_name_and_comment(header_t *, char **);
int check_command(char *);
bool check_args(char **);
bool check_label(char *);
bool check_types(char *, int *);
op_t *get_instruction(char *);
char *get_mnemonique(char *);
int get_nb_arg(char *, char *);
int *get_types(char *, char *, int);

char **my_str_to_word_array(char *, char);

/*          process         */
bool compile_n_write(header_t *header, op_t **instuctions, char *filepath);
bool write_header(header_t *header, fd_t fd);
bool write_instruct(op_t **instructions, fd_t fd);

/*          free            */
void my_free(header_t *, op_t **, stat_t *);

#endif /* !COMPILER_FUNCTION_H_ */
