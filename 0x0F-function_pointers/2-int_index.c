#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - executes a function given
 * @array: array
 * @size: size
 * @cmp: pointer to fun
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
