#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min num
 * @max: max num
 * Return: pointer of mem
 */

int *array_range(int min, int max)
{
int *ptr;
int i;
int indx;
indx = 0;
if (min > max)
return (NULL);
ptr = malloc(((max - min) + 1) * sizeof(int));
if (ptr == NULL)
return (NULL);
if (min == max)
{
*ptr = min;
return (ptr);
}
for (i = min; i <= max; i++)
{
*(ptr + indx) = i;
indx++;
}
return (ptr);
}
