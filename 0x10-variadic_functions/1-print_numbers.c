#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - does something
 * @separator: variable
 * @n: variable
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != n - 1 && separator)
printf("%s", separator);
}
printf("\n");
}
