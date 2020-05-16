/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

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
void *live_MNEMONIC(void);
void *ld_MNEMONIC(void);
void *st_MNEMONIC(void);
void *add_MNEMONIC(void);
void *sub_MNEMONIC(void);
void *and_MNEMONIC(void);
void *or_MNEMONIC(void);
void *xor_MNEMONIC(void);
void *zjmp_MNEMONIC(void);
void *ldi_MNEMONIC(void);
void *sti_MNEMONIC(void);
void *fork_MNEMONIC(void);
void *lld_MNEMONIC(void);
void *lldi_MNEMONIC(void);
void *lfork_MNEMONIC(void);
void *aff_MNEMONIC(void);

#endif /* !FUNCTION_H_ */