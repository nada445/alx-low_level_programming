#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creating an array
 * @size: size of array
 * @c: char to initiallize
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size);
	unsigned int i;

	if (size == 0)
	return (NULL);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}

	return (arr);

}
