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
