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
 * _strncpy -  copies two strings.
 * @dest: 1st str
 * @src: 2nd str
 * @n: bytes from src to be coppied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int s;
int k;

s = _strlen(src);
k = _strlen(dest);

for (i = 0; (i < n && src[i] != '\0'); i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
dest[i] = '\0';
return (dest);

}
