#include <stdio.h>
#include "main.h"


/**
 * jack_bauer - prints the clock minute wise
 * description: clock
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i;
for (i = 0; i < 24; i++)
{
int j;
for (j = 0; j < 60; j++)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
_putchar(':');
_putchar('0' + j / 10);
_putchar('0' + j % 10);
_putchar('\n');
}
}
}
