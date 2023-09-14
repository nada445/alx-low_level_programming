#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - does something
 * @separator: variable
 * @n: variable
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char*);
if (s)
printf("%s", s);
else
printf("(nil)");
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
}
