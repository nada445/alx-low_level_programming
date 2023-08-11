#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
int j;
for (j = 0; j < 10; j++)
{
int k;
for (k = i; k < 10; k++)
{
int l;
for (l = j + 1; l < 10; l++)
{
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + k);
putchar('0' + l);
if (i + j + k + l != 35)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
