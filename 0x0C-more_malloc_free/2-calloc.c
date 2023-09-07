#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: num of mem block
 * @size: number of memory places
 * Return: pointer of mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (!nmemb || !size)
return (NULL);
ptr = malloc(nmemb * size);
if (!ptr)
{
free(ptr);
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;
return (ptr);
}
