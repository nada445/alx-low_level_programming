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
 * puts2 - prints every other char of a str followed by a new line
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; i < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
