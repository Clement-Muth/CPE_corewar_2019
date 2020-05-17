/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** error
*/

#include "vm/vm.h"

void print_usage(void)
{
    m_putstr("USAGE\n", 1);
    m_putstr("  ./corewar [-dump nbr_cycle] [[-n prog_number] \
    [-a load_address] prog_name] ...\n", 1);
    m_putstr("DESCRIPTION\n", 1);
    m_putstr("  -dump nbr_cycle dumps the memory after the nbr_cycle execution \
    (if the round isn’t already over) with the following format: 32 bytes/line \
    in hexadecimal (A0BCDEFE1DD3...)\n", 1);
    m_putstr("  -n prog_number sets the next program’s number. By default, \
    the first free number in the parameter order\n", 1);
    m_putstr("  -a load_address sets the next program’s loading address. \
    When no address is specified, optimize the addresses so that the processes \
    are as far away from each other as possible. The addresses are MEM_SIZE \
    modulo.\n", 1);
}