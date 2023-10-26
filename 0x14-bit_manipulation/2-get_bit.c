#include "main.h"
/**
 * get_bit - ffjfjf
 * @n: ffff
 * @index: rurur
 * Return: ef
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 64)
return (-1);
return ((n >> index) & 1);
}
