#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase letters followed by new line
 *
 * print_alphabet_x10 - prints lowercase letters followed by new line 10 times
 * description: function to use in the main
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
/**
 * print_alphabet_x10 - prints lowercase letters followed by new line 10 times
 */
void print_alphabet_x10(void)
{
int t;
for (t = 0; t < 10; t++)
{
print_alphabet();
}
}
