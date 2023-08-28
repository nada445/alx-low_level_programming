#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer (memory block to scan)
 * @accept: pointer (memory block reference)
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
unsigned int length;

length = 0;

for (i = 0; s[i] != ' ' && s[i] >= '\0'; i++)
{
for (j = 0; accept[j] >= '\0'; j++)
{
if (s[i] == accept[j])
length++;
}
}
return (length);
}
