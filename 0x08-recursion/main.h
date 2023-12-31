#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt(int n,int guess);
int is_prime_number(int n);
int prim(int n,int i);
int is_palindrome(char *s);
int palindrome (char *s, int v, int e);
int wildcmp(char *s1, char *s2);
#endif /* MAIN_H_INCLUDED */
