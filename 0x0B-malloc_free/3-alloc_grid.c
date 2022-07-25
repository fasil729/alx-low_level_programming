#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - alloc memory array
 * @width: width
 * @height: height
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(grid[k]);
				free(grid);
			}
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
