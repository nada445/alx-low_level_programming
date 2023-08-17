#include <stdio.h>
#include "main.h"

/**
 * print_number - print latge numbers with putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
int i;
int j;
int flag = 0;
int tmp = 10;

if (n < 0)
{
putchar('-');
n = -1 * n;
}
if (n < 10)
putchar('0' + n);
else
{
for (j = 1000000000; flag != 1; j /= 10)
{
if (n >= j)
{
flag = 1;
int  countr = 0;
for (i = j; countr < tmp  ; i /= 10)
{
countr++;
putchar('0' + n / i);
n %= i;
}
}
tmp--;
if (flag)
break;
}
}
}
