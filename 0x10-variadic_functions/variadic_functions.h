#ifndef VARIADIC_FUNCTIONS_H_INCLUDED
#define VARIADIC_FUNCTIONS_H_INCLUDED
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct typ - Struct op
 *
 * @t: The operator
 * @f: The function associated
 */
typedef struct typ
{
char *s;
void (*f)(va_list);
} typ_t;
void print_string(va_list);
void print_int(va_list);
void print_float(va_list);
void print_char(va_list);
#endif /* VARIADIC_FUNCTIONS_H_INCLUDED*/
