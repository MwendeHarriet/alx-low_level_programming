#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - nested loop to make grid
 *description - returns a pointer to 2d array of integers
 *@width: width
 *@height: height input
 * Return: On success, returns a pointer to the newly created 2D array
 *         On failure or if width/height is 0 or negative, returns NULL
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);

	z = malloc(sizeof(int *) * height);

	if (z == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		z[x] = malloc(sizeof(int) * width);

		if (z[x] == NULL)
		{
			for (; x >= 0; x--)
				free(z[x]);

			free(z);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			z[x][y] = 0;
	}

	return (z);
}
