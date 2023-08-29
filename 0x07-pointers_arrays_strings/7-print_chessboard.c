#include "main.h"
#include <stdio.h>
/**
 * print_chessboard -  locates a substring.
 * @a: pointer (memory block to scan)
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;

j = 0;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
