#include "main.h"
#include <stdio.h>
/**
 * _strchr - prints out the length of the str
 * @s: pointer (memory block to coppy in)
 * @c: pointer (memory bock to be coppied
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{

int i;


for (i = 0; *(s + i) >= '\0'; i++)
{
if (*(s + i) == c)
{
return (s + i);
}
}
return (NULL);
}
