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
int flag;
int i;

i = 0;
flag = 0;
do {
if (*(s + i) == c)
{
flag = 1;
return (s + i);
}
i++;
} while (*(s + i) != '\0' && flag == 0);
return (NULL);
}
