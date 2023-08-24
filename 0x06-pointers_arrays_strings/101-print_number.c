#include "main.h"
/**
 * print_number - prints number
 * @n: number
 * Return: void
 */

void print_number(int n)
{
unsigned int num;
num = n;
if (n < 0)
{
putchar('-');
num = -1 * num;
}
if (num / 10 != 0)
print_number(num / 10);
putchar('0' + num % 10);
}
