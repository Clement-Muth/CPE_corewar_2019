/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** string_function
*/

#ifndef STRING_FUNCTION_H_
#define STRING_FUNCTION_H_

bool _strcmp(const char *__restrict__ comparing, const char *__restrict__
compared);

void _putchar(const char character, const int fd);

void _putstr(const char *__restrict__ string, const int fd);

void _putnbr(int number, const int fd);

void _printt(const char *restrict format, const void *array, bool jump);

size_t _strlen(char *__restrict__ string);

size_t _strnlen(const char *restrict string, const char end);

char *_memalloc(size_t memsize);

void *_memcpy(void *__restrict__ dest, const void *__restrict__ src, size_t
length);

void _revstr(char *string, int length);

char *_strdup(const char *src);

char *_strcpy(char *__restrict__ dest, const char *__restrict__ src);

char *_strncpy(const char *src, const char n);

char *_strnlcpy(const char *__restrict__ src, const char beg, char end);

char *_stricpy(const char *restrict src, const char ign);

#endif /* !STRING_FUNCTION_H_ */