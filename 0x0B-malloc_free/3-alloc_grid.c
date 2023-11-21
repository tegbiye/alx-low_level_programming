#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */

int **alloc_grid(int width, int height)
{
int x, y;
int **pt;

if (width <= 0 || height <= 0)
{
return  (NULL);
}
pt = malloc(height * sizeof(int *));
if (pt == NULL)
{
return (NULL);
}
for (x = 0; x < height; x++)
{
pt[x] = malloc(width * sizeof(int));
if (pt[x] == NULL)
{
for (y = 0; y < x;  y++)
	free(pt[y]);
free(pt);
return (NULL);
}
for (y = 0; y < width; y++)
{
pt[x][y] = 0;
}
}
return (pt);
}
