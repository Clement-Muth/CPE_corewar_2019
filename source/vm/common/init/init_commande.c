/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** init
*/

#include "vm/vm.h"

void init_commande(commande_t *commande)
{
    commande->execute[0] = &live_MNEMONIC;
    commande->execute[1] = &ld_MNEMONIC;
    commande->execute[2] = &st_MNEMONIC;
    commande->execute[3] = &add_MNEMONIC;
    commande->execute[4] = &sub_MNEMONIC;
    commande->execute[5] = &and_MNEMONIC;
    commande->execute[6] = &or_MNEMONIC;
    commande->execute[7] = &xor_MNEMONIC;
    commande->execute[8] = &zjmp_MNEMONIC;
    commande->execute[9] = &ldi_MNEMONIC;
    commande->execute[10] = &sti_MNEMONIC;
    commande->execute[11] = &fork_MNEMONIC;
    commande->execute[12] = &lld_MNEMONIC;
    commande->execute[13] = &lldi_MNEMONIC;
    commande->execute[14] = &lfork_MNEMONIC;
    commande->execute[15] = &aff_MNEMONIC;
}