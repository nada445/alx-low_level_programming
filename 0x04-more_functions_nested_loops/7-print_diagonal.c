#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print n \ followed by new line
 * @n: number of \
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
