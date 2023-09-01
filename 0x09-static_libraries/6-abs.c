#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n : the number to print
 * description: absolute values only
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
}
return (n);
}
