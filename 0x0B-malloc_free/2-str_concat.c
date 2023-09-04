#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - copping 2 strings into dynamically allocated arr
 * @s1: string1
 * @s2: string2
 * Return: array
 */

char *str_concat(char *s1, char *s2)
{
int size1;
int size2;
int i;
char *arr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (size1 = 0; *(s1 + size1) != '\0'; size1++)
{
}
for (size2 = 0; *(s2 + size2) != '\0'; size2++)
{
}
arr = (char *)malloc(size1 + size2 + 1);



if (arr == NULL)
return (NULL);


for (i = 0; i < size1; i++)
{
arr[i] = s1[i];
}
for (i = 0; i <= size2; i++)
{
arr[i + size1] = s2[i];
}

return (arr);

}
