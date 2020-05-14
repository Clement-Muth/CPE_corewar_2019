/*
** EPITECH PROJECT, 2020
** CPE_corewar_bootstrap_2019 [WSL: Debian]
** File description:
** _itoa
*/

#include "maths.h"

void strrev(char *str)
{
    unsigned char a;
    unsigned len = strlen((const char *)str);

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
    }
}

char *m_itoa(int num)
{
    int i = 0;
    bool isNegative = false;
    char *str = m_memalloc(300);

    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
    if (num < 0 && 10 == 10) {
        isNegative = true;
        num = -num;
    }
    while (num != 0) {
        int rem = num % 10;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/10;
    }
    if (isNegative) str[i++] = '-';
    str[i] = '\0';
    strrev(str);
    return (str);
}