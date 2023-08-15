#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * print_alphabet prints the alphabet in lowercase
 * print_alphabet_x10 prints the alphabet 10 times
 * int _islower checks if the char lowercase
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int j);
int _isalpha(int c);

#endif /** MAIN_H_INCLUDED*/
