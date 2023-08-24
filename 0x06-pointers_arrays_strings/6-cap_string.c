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
 * cap_string -  chande lowercase to upper
 * @a: arr
 * Return: string after changing
 */

char *cap_string(char *a)
{
int i;
int s;

s = _strlen(a);
for (i = 0; i < s; i++)
{
if (i == 0)
a[i] -= 32;
if (a[i] == '\t' || a[i] == '\n' || a[i] == ' '
|| a[i] == ',' || a[i] == ';' || a[i] == '.'
|| a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '('
|| a[i] == ')' || a[i] == '{' || a[i] == '}')
{
if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
a[i + 1] -= 32;
}
}
return (a);
}
