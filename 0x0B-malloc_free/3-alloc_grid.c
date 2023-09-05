#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **rim;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	rim = malloc(sizeof(int *) * height);

	if (rim == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		rim[x] = malloc(sizeof(int) * width);

		if (rim[x] == NULL)
		{
			for (; x >= 0; x--)
				free(rim[x]);

			free(rim);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			rim[x][y] = 0;
	}

	return (rim);
}
