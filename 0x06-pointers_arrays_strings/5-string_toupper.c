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
 * string_toupper -  chande lowercase to upper
 * @a: arr
 * Return: string after changing
 */

char *string_toupper(char *a)
{
int i;
int s;

s = _strlen(a);
for (i = 0; i < s; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] -= 32;
}
return (a);
}
