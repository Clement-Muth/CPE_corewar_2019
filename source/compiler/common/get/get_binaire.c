/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include <stddef.h>
#include "compiler/compiler.h"

static void get_byte(char *byte, char c)
{
    char hexa_table[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        'A', 'B', 'C', 'D', 'E', 'F'};
    char int_table[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
        15};
    int nbr = 0;
    int pow = 4;

    for (int i = 0; 15 > i; ++i)
        if (c == hexa_table[i])
            nbr = int_table[i];
    for (int i = 0; 4 > i; ++i) {
        if (nbr >= m_pow(2, pow)) {
            nbr -= m_pow(2, pow);
            byte[i] = '1';
        } else
            byte[i] = '0';
    }
}

int get_binaire_from_hexa(char *hexa)
{
    char byte1[4] = "0000";
    char byte2[4] = "0000";
    char octet[8] = "00000000";
    int nbr = 0;

    get_byte(byte1, hexa[0]);
    get_byte(byte2, hexa[1]);
    for (int i = 0; 4 > i; ++i) {
        octet[i] = byte1[i];
        octet[i + 4] = byte2[i];
    }
    nbr = get_binaire(octet);
    return (nbr);
}

int get_binaire(char *hexa)
{
    int nbr = 0;
    int pow = 8;
    int tmp = 0;

    for (int i = 0; hexa[i]; ++i) {
        tmp = hexa[i] + 48;
        nbr += (tmp * m_pow(2, pow));
        --pow;
    }
    return (nbr);
}
