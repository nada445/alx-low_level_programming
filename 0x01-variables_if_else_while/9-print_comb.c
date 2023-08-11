#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
