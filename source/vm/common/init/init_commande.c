/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

void init_commande(commande_t *commande)
{
    commande->execute[0] = &live_mnemonic;
    commande->execute[1] = &ld_mnemonic;
    commande->execute[2] = &st_mnemonic;
    commande->execute[3] = &add_mnemonic;
    commande->execute[4] = &sub_mnemonic;
    commande->execute[5] = &and_mnemonic;
    commande->execute[6] = &or_mnemonic;
    commande->execute[7] = &xor_mnemonic;
    commande->execute[8] = &zjmp_mnemonic;
    commande->execute[9] = &ldi_mnemonic;
    commande->execute[10] = &sti_mnemonic;
    commande->execute[11] = &fork_mnemonic;
    commande->execute[12] = &lld_mnemonic;
    commande->execute[13] = &lldi_mnemonic;
    commande->execute[14] = &lfork_mnemonic;
    commande->execute[15] = &aff_mnemonic;
}