/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm_struct
*/

#ifndef VM_STRUCT_H_
#define VM_STRUCT_H_

typedef struct champion_s
{
    int alive;
} champion_t;

typedef struct data_s
{
    int nbr_champ;
    champion_t champ[3];
} data_t;

typedef struct vm_s
{
    data_t *data;
} vm_t;


#endif /* !VM_STRUCT_H_ */
