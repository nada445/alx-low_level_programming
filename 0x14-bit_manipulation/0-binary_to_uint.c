#include "main.h"
#include <string.h>
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
 * _pow - power fun
 * @a: num1
 * @b: num2
 * Return: result
 */
int _pow(int a, int b)
{
int result;
int i;

result = 1;

for (i = 0; i < b; i++)
{
result *= a;
}
return (result);
}
/**
 * binary_to_uint - mvvmvvv
 * @b: nknjik
 * Return: jfjfj
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;
	int len = 0, pow = 0;

	for (i = 0; b[i] != '\0'; i++)
		len++;

	if (!b)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		dec += (b[i] - 48) * _pow(2, pow);
		pow++;
	}
	return (dec);
}

