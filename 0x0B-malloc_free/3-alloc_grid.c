#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - Entry point
 * @width: width of array
 * @height: height of array
 * Description: creates 2D array)?
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int y;
	int k;

	if (height <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (k = 0; k < height; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (x = 0; grid[x]; x++)
	{
		for (y = 0; grid[x][y]; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
