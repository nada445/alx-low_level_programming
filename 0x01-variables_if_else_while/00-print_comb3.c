#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
int j;
for (j = i + 1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i + j != 17)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
