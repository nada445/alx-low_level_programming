#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - 2darr
 * @width: cols
 * @height: rows
 * Return: 2darray
 */

int **alloc_grid(int width, int height)
{
int i;
int j;
int **arr;

if (width <= 0 || height <= 0)
return (NULL);
arr = (int **)malloc(height * sizeof(int *));

if (arr == NULL)
{
free(*arr);
free(arr);
return (NULL);
}
for (i = 0 ; i < height; i++)
arr[i] = (int *)malloc(width * sizeof(int));

if (arr == NULL)
{
free(*arr);
free(arr);
return (NULL);
}
for (i = 0; i < height ; i++)
{
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
return (arr);

}
