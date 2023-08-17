#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_number - print latge numbers with putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
unsigned int tmp;
tmp = n;
if (n < 0)
{
_putchar('-');
tmp = -1 * tmp;
}
if (tmp / 10 > 0)
print_number(tmp / 10);
_putchar('0' + tmp % 10);
}
