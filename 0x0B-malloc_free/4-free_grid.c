#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: pointer to pointer of integer
 * @height: columns of array
 * Description: free up 2D array in memory)?
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

/*	if (height <= 0 || grid == NULL)
	{
		return (NULL);
		} */

	for (i = 0; i < height; i++)
	{
		free(grid[i]);

	}
	free(grid);
}
