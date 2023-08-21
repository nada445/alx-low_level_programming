#include "main.h"
/**
 * _strlen - prints out the length of the str
 * @s: str to print its size
 * Return: length of string
 */

int _strlen(char *s)
{
int i;
int counter;

counter = 0;

for (i = 0; s[i] != '\0'; i++)
{
counter++;
}

return (counter);
}

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: arr to coppy in
 * @src: arr to be coppied
 * Return: final arr
 */

char *_strcpy(char *dest, char *src)
{
int i;
int s;

s = _strlen(src);

for (i = 0; i <= s; i++)
{
dest[i] = src[i];
}

return (dest);
}
