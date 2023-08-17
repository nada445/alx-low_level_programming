#include <stdio.h>

/**
 * print_triangle - Entry point
 * @size: size of it
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j >= size - i - 1)
putchar('#');
else
putchar(' ');
}
putchar('\n');
}
if (size <= 0)
printf("\n");
}
