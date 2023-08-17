#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks upper case letter
 * @c: letter to check
 * Return: 1 if upper 0 if lower
 */

int _isupper(int c)
{
	return (c > 64 && c < 91);
}
