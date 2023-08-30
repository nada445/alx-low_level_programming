#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion -  prints sqrt n
 * @n: number
 * Return: sqrt n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
return (_sqrt(n, 1));
}
/**
 * _sqrt -  prints sqrt n
 * @n: number
 * @guess: sqrt
 * Return: sqrt n
 */
int _sqrt(int n, int guess)
{
if (guess > n)
return (-1);
if (guess * guess != n)
return (_sqrt(n, guess + 1));
return (guess);
}
