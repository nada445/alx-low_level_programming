#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_int - does something
 * @ap: variable
 * Return: void
 */

void print_int(va_list ap)
{
printf("%d", va_arg(ap, int));
}
/**
 * print_string - does something
 * @ap: variable
 * Return: void
 */
void print_string(va_list ap)
{
char *str;
str = va_arg(ap, char *);
switch ((int)(!str))
case 1:
str = "(nil)";

printf("%s", str);
}
/**
 * print_float - does something
 * @ap: variable
 * Return: void
 */
void print_float(va_list ap)
{
printf("%f", va_arg(ap, double));
}
/**
 * print_char - does something
 * @ap: variable
 * Return: void
 */
void print_char(va_list ap)
{
printf("%c", va_arg(ap, int));
}
/**
 * print_all - does something
 * @format: variable
 * Return: void
 */
void print_all(const char * const format, ...)
{
int i;
int j;
va_list ap;
typ_t typs[] = {
{"c", print_char},
{"f", print_float},
{"s", print_string},
{"i", print_int},
{NULL, NULL}
};
va_start(ap, format);
j = 0;
while (format && format[j])
{
i = 0;
while (i < 4)
{
if (format[j] == typs[i].s[0])
{
typs[i].f(ap);
if (format[j + 1])
printf(", ");
}
i++;
}
j++;
}
printf("\n");
}
