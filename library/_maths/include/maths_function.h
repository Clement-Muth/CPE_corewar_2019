/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** maths_function
*/

#ifndef MATHS_FUNCTION_H_
#define MATHS_FUNCTION_H_

int _atoi(const char *string);

char *_itoa(int number);

int _pow(int nb , int p);

int _sqrt(int nb);

size_t _dist_roth(vector2i a, vector2i b);

bool _preg_match(const char *__restrict__ pattern,
const char *__restrict__ subject);

#endif /* !MATHS_FUNCTION_H_ */