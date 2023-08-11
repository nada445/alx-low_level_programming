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
for (i = 0; i < 10 ; i++)
{
int j;
for (j = 0; j < 10; j++)
{
int firstnum = i * 10 + j;
int k;
for (k = firstnum + 1; k < 100; k++)
{
putchar('0' + firstnum / 10);
putchar('0' + firstnum % 10);
putchar(' ');
putchar('0' + k / 10);
putchar('0' + k % 10);
if (k + firstnum  != 197)
{putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
