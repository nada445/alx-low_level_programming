#include <stdio.h>
#include "main.h"


/**
 * times_table - print 9 times table
 * description: learn times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int result;
int i;
for (i = 0; i < 10; i++)
{
int j;
for (j = 0; j < 10; j++)
{
result = i * j;
if (result < 10)
{
_putchar('0' + result);
if (j != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
else
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
