#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copping a string into dynamically allocated arr
 * @str: string
 * Return: array
 */

char *_strdup(char *str)
{
int size;
int i;
char *arr;
for (size = 0; *(str + size) != '\0'; size++)
{
}
arr = (char *)malloc(size);
if (*str == '\0')
return (NULL);

if (arr == NULL)
return (NULL);


for (i = 0; i <= size; i++)
{
arr[i] = str[i];
}

return (arr);

}
