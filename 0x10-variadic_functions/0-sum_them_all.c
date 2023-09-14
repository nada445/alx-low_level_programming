#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - does something
 * @n: variable
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list ap;
sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);

return (sum);
}
