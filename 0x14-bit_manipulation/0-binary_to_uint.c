#include "main.h"
#include <string.h>
/**
 * int binary_to_uint - mvvmvvv
 * @b: nknjik
 * Return: jfjfj
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;
	int num = atoi(b);

	for (i = 0; num != 0; i++)
	{
		dec += num % 10;
		num /= 10;
	}
	return (num);
}

		
