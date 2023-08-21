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
 * puts_half - prints half of a string, followed by a new line.
 * @str: str to print its size
 * Return: void
 */

void puts_half(char *str)
{
int i;
int s;
int mid;

s = _strlen(str);
if (s % 2 == 0)
mid = s / 2;
else
mid = (s + 1) / 2;

for (i = mid; i < s; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
