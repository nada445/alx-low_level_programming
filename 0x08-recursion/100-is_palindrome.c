#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome -  check for palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
int cntr;
cntr = strlen(s);
return (palindrome(s, 0, cntr - 1));
}
/**
 * palindrome - help
 * @s: ff
 * @v: fff
 * @e: ff
 * Return: 1 0
 */

int palindrome(char *s, int v, int e)
{
if (v == e)
return (1);
if (s[v] != s[e])
return (0);
if (v < e + 1)
return (palindrome(s, v + 1, e - 1));

return (1);
}
