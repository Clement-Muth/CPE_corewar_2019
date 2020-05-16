/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm_struct
*/

#ifndef VM_STRUCT_H_
#define VM_STRUCT_H_

typedef struct ram_s
{
    unsigned char *ram;
} ram_t;

typedef struct commande_s
{
    void (*execute[15])(void);
} commande_t;

typedef struct champion_s
{
    int alive;
    header_t file;
    unsigned char *instruction;
} champion_t;

typedef struct data_s
{
    int nbr_champ;
    champion_t champ[3];
} data_t;

typedef struct vm_s
{
    data_t *data;
    ram_t *ram;
    commande_t *commande;
} vm_t;


#endif /* !VM_STRUCT_H_ */
