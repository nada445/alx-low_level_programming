#include "main.h"

/**
 * print_array - prints n elements of an arr of int followed by a new line
 * @a: ar
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

if (n < 0)
n = 0;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
