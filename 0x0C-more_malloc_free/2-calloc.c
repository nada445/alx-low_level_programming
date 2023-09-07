#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memset - prints out the length of the str
 * @s: pointer to the start point
 * @b: fiing
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr;
unsigned int i;
ptr = s;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (ptr);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: num of mem block
 * @size: number of memory places
 * Return: pointer of mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (!nmemb && !size)
return (NULL);

ptr = malloc(nmemb * sizeof(int));
if (!ptr)
{
free(ptr);
return (NULL);
}
return (_memset(ptr, 0, nmemb * sizeof(int)));
}
