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
int i;
int countr;
unsigned int x;
int tmp;
x = n;
if (n > 2147483647)
return;
if (n < 0)
{
_putchar(45);
x = -1 * x;
}
countr = -1;
tmp = n;
while (tmp != 0)
{
countr++;
tmp /= 10;
}
for (i = _pow(10, countr); i != 0; i /= 10)
{
_putchar('0' + x / i);
x %= i;
}
}
/**
 * _pow - ggg
 * @x: fff
 * @y: ffff
 * Return: gg
 */
int _pow(int x, int y)
{
int i;
int result;
result = 1;
for (i = 0; i < y; i++)
{
result *= x;
}
return (result);
}
