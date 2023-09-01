#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks whether the input digit or not
 * @c: checking
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	return (c < 58 && c > 47);
}
