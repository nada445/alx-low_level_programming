#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion -  prints a string followd by new line in reverse.
 * @s: pointerto string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
}
if (*s != '\0')
putchar(*s);
return;
}
