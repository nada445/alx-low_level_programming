#include <stdio.h>
#include "main.h"

/**
 * print_number - print latge numbers with putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
unsigned int num;
num = n;
if (n < 0)
{
_putchar(45);
num = -1 * num;
}
if (num / 10 > 0)
print_number(num / 10);
_putchar('0' + num % 10);
}
