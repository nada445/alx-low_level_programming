#include "main.h"
#include <stdio.h>
/**
 * is_palindrome -  check for palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
int i;
int j;
int cntr;
cntr = 0;
for (i = 0; s[i] != '\0'; i++)
{
cntr++;
}
for (j = 0; j < cntr / 2; j++)
{
if (s[j] != s[cntr - 1 - j])
return (0);
}
return (1);
}
