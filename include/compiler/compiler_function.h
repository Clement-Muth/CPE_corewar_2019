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
void *init_header(header_t *header);
op_t **init_instructions(char **buf, int *n);
bool get_champions_informations(op_t **instructions, header_t *header,
    char **buf, compiler_t *cmp);
bool get_name_and_comment(header_t *, char **);
int check_command(char *);
bool check_args(char **);
bool check_label(char *);
bool check_types(char *, int *);
op_t *get_instruction(char *line, compiler_t *cmp);
char *get_mnemonique(char *);
int get_nb_arg(char *, char *);
int *get_types(char *name, char *line, int nb_arg, char **args);

char **my_str_to_word_array(char *, char);

/*          process         */
bool compile_n_write(header_t *header, op_t **instuctions, char **args,
char *filepath);
bool write_header(header_t *header, fd_t fd);
bool write_instruct(op_t **instructions, char **args, fd_t fd);
char **separate_arg_value(char *arg);
int get_binaire(char *hexa);

/*          free            */
void my_free(header_t *, op_t **, stat_t *);

#endif /* !COMPILER_FUNCTION_H_ */
