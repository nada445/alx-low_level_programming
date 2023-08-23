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
 * reverse_array -  reverses arr of int
 * @a: arr
 * @n: num of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int tmp;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
