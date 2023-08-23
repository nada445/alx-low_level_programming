#include "main.h"
/**
 * _strlen - prints out the length of the str
 * @s: str to print its size
 * Return: length of string
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
}

return (i);
}

/**
 * _strcat -  concatenates two strings.
 * @dest: 1st str
 * @src: 2nd str
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

for (j = 0; dest[j] != ' '; j++)
{
}
for (i = 0; src[i] != '\0'; i++)
{
dest[j + 1 + i] = src[i];
}
dest[j + 1 + i] = '\0';
return (dest);
}
