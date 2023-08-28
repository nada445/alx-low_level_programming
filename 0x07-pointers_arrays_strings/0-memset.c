#include "main.h"
#include <stdio.h>
/**
 * _memset - prints out the length of the str
 * @s: pointer to the start point
 * @b: fiing
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
