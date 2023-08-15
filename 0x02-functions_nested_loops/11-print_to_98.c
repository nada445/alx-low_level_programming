#include <stdio.h>
#include "main.h"


/**
 * print_to_98 -  prints all natural numbers from n to 98 followed by new line
 * @n: a number to start count from
 * description: count to 98
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int i;
for (i = n; i < 99; i++)
{
if (i > 10)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
else
{
_putchar('0' + i);
}
_putchar(',');
_putchar('\n');
}
}
