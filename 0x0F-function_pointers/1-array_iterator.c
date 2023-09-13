#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * @array: array
 * @size: size
 * @action: pointer to fun
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action && array)
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
}
