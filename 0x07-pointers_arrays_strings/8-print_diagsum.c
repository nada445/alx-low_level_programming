#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  locates a substring.
 * @a: pointer (memory block to scan)
 * @size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int j;
int diag1;
int diag2;

diag1 = 0;
diag2 = 0;

int (*pointer)[size];
pointer = a;
for (i = 0; i < size; i++)
{
diag1 += pointer[i][i];
}
printf("%d, ", diag1);

for (i = size - 1; i >= 0; i--)
{
diag2 += pointer[i][size - 1 - i];
}
printf("%d", diag2);
printf("\n");
}
