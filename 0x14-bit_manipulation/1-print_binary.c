#include "main.h"
/**
 * print_binary - rgrgv
 * @n: frv
 * Return: fve
 */
void print_binary(unsigned long int n)
{
int i = sizeof(n) * 8, cntr = 0;

while (i)
{
if (n & 1L << --i)
{
_putchar('1');
cntr++;
}
else if (cntr)
_putchar('0');
}
if (!cntr)
_putchar('0');
}
