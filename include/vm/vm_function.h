/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

#ifndef READ_SIZE
    #define READ_SIZE (0)
#endif /*READ_SIZE*/

char *get_next_line(int);
void print_usage(void);
bool init_champion(vm_t *vm, const int ac, char *const restrict *const restrict av);
bool init_struct(vm_t *vm);
bool init_process(vm_t *vm, const int ac, char *const restrict *const restrict av);
void init_commande(commande_t *commande);
bool init_ram(vm_t *vm);
void get_global_int(champion_t *champ);
bool ram_process(vm_t *vm);
bool fight_process(vm_t *vm);
void free_vm(vm_t *vm);

// commande for vm
void live_mnemonic(void);
void ld_mnemonic(void);
void st_mnemonic(void);
void add_mnemonic(void);
void sub_mnemonic(void);
void and_mnemonic(void);
void or_mnemonic(void);
void xor_mnemonic(void);
void zjmp_mnemonic(void);
void ldi_mnemonic(void);
void sti_mnemonic(void);
void fork_mnemonic(void);
void lld_mnemonic(void);
void lldi_mnemonic(void);
void lfork_mnemonic(void);
void aff_mnemonic(void);

#endif /* !FUNCTION_H_ */