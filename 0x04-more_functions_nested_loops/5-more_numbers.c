#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (i != 0 && j < 5)
				{
					putchar('0' + i);
				}
			if (i == 0 || (i != 0 && j < 5))
			putchar('0' + j);
			}
		}
		putchar('\n');
	}
}
