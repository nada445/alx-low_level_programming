#include "main.h"

/**
 * swap_int - swaps the values of two int
 * @a: 1st var
 * @b: 2nd var
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
