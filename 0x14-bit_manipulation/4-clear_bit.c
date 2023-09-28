#include "main.h"
/**
 * _pow - power fun
 * @a: num1
 * @b: num2
 * Return: result
 */
unsigned int _pow(int a, int b)
{
unsigned int result;
int i;

result = 1;

for (i = 0; i < b; i++)
{
result *= a;
}
return (result);
}

/**
 * clear_bit - gjbifkgb
 * @n: fgbgyh
 * @index: fghg
 * Return: rtht
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (_pow(2, index) >  *n)
		return (1);

	*n = *n  - _pow(2, index);
	return (1);
}
