#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>

/**
 * _isupper - checcks for uppercase letter
 * @c: letter to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void _putchar(char c);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
#endif /** MAIN_H_INCLUDED*/
