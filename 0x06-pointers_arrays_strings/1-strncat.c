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
 * _strncat -  concatenates two strings.
 * @dest: 1st str
 * @src: 2nd str
 * @n: bytes from src to be coppied
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int j;
int i;
int s;

s = _strlen(src);
j = _strlen(dest);

for (i = 0; (i < n && i < s); i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);

}
