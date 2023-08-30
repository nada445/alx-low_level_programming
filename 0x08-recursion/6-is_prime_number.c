#include "main.h"
#include <stdio.h>
/**
 * is_prime_number -  check for prim
 * @n: number
 * Return: sqrt n
 */

int is_prime_number(int n)
{
if (n == 2)
return (1);
if (n == 1 || n == 0)
return (0);
if (n % 2 == 0 || n < 0)
return (0);

return (prim(n, 3));
}
/**
 * prim - helping fun
 * @n: number
 * @i: sqrt
 * Return: sqrt n
 */
int prim(int n, int i)
{
if (i >= n)
return (1);
if (n % i == 0)
return (0);

return (prim(n, i + 1));

}
