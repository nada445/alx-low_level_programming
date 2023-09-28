#include "main.h"
/**
 * set_bit - gjbifkgb
 * @n: fgbgyh
 * @index: fghg
 * Return: rtht
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
