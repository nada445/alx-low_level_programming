#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n : the number to check
 * description: check whether the number is +ve or -ve or 0
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
}
