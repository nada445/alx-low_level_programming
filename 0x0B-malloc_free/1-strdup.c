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
if (str == NULL)
return (NULL);
for (size = 0; *(str + size) != '\0'; size++)
{
}
arr = (char *)malloc(size + 1);

if (arr == NULL)
return (NULL);


for (i = 0; i <= size; i++)
{
arr[i] = str[i];
}

return (arr);

}
