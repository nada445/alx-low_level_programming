#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer of mem
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *newptr, *tmp;
unsigned int i, init;

tmp = ptr;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
}
if (new_size < old_size)
init = new_size;
else
init = old_size;

newptr = malloc(new_size);
if (newptr == NULL)
{
free(ptr);
free(newptr);
return (NULL);
}
for (i = 0; i < init; i++)
{
newptr[i] = tmp[i];
}
free(ptr);
return (newptr);
}
