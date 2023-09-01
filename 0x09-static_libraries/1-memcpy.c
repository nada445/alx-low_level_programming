#include "main.h"
#include <stdio.h>
/**
 * _memcpy - prints out the length of the str
 * @dest: pointer (memory block to coppy in)
 * @src: pointer (memory bock to be coppied
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
