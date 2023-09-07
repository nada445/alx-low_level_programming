#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of memory places
 * Return: pointer to newstring
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, size2, size1;
char *ptr;

size1 = 0;
size2 = 0;

if (s2 == NULL)
s1 = "";
if (s1 == NULL)
s1 = "";

for (size1 = 0; s1[size1] != '\0'; size1++)
{
}
for (size2 = 0; s2[size2] != '\0'; size2++)
{
}
if (n > size2)
n = size2;

ptr = malloc(size1 + n + 1);

if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < size1; i++)
ptr[i] = s1[i];
for (i = 0; i < n; i++)
ptr[i + size1] = s2[i];
ptr[size1 + i] = '\0';
return (ptr);
}
