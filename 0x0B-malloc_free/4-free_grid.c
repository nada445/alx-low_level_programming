#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2darr
 * @grid: freed
 * @height: rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
{
free(grid);
return;
}
for (i = 0 ; i < height; i++)
{
if (grid[i] == NULL)
{
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
return;
}
}
}
