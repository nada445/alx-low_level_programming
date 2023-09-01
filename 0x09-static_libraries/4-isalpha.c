#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks whether the char is letter
 * @c: The character to check
 * description: searching for letter
 * Return: Always 0 if upper 1 if lowe
 */
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
