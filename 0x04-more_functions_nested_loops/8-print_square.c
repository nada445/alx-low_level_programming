#include <stdio.h>
#include "main.h"

/**
 * print_square - print square of #
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			putchar('#');
		}
		putchar('\n');

	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
