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
void *ptr;
int *tmp;
unsigned int i;
if (!nmemb && !size)
return (NULL);
tmp = malloc(nmemb * sizeof(int));
ptr = malloc(nmemb * size);
if (!ptr)
{
free(ptr);
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
tmp[i] = 0;
}
ptr = tmp;
free(tmp);
return (ptr);
}
