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
 * _print_array - prints n elements of an arr of int followed by a new line
 * @a: ar
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

if (n < 0)
return;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
printf(" ,");
}
printf("\n");
}
