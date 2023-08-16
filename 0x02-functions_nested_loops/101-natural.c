#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_multiple - prints multipiles of 3 and 5
 * description: multipiles of 3 and 5
 * Return: Always 0 (Success)
 */

void print_multiple(void)
{
int i;
int sum = 0;
for (i = 0; i < 1024; i += 15)
{
sum += i;
}
for (i = 3; i < 1024 && i % 15 != 0; i += 3)
{
sum += i;
}
for (i = 5; i < 1024 && i % 15 != 0; i += 5)
{
sum += i;
}
printf("%d", sum);
putchar('\n');
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
print_multiple();
return (0);
}
