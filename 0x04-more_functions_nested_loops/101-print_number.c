#include <stdio.h>
#include "main.h"

/**
 * print_number - print latge numbers with putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
unsigned int i;
unsigned int j;
unsigned int x;
int countr;
int flag = 0;
int tmp = 10;
if (n > 2147483647)
return;
if (n < 0)
{
_putchar(45);
n = -1 * n;
}
x = n;
if (n < 10)
_putchar('0' + x);
else
{
for (j = 1000000000; flag != 1; j /= 10)
{
if (x >= j)
{
flag = 1;
countr = 0;
for (i = j; countr < tmp  ; i /= 10)
{
countr++;
_putchar('0' + x / i);
x %= i;
}
}
tmp--;
}
}
}
