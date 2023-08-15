#include <stdio.h>
#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 * @n : the number to find its last digit
 * description: getting the last dogot
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
if (n < 0)
n *= -1;
int lastdigit = n % 10;
_putchar('0' + lastdigit);
return (lastdigit);
}
