#include "main.h"
#include <stdio.h>
/**
 * factorial -  prints factorial of a number
 * @n: number
 * Return: fact
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);

return (n * factorial(n - 1));
}
