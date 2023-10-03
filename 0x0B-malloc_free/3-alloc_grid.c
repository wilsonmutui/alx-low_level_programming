#include "main.h"
#include <stdlib.h>
/**
 *  alloc_grid - nested loop to make grid
 *  @width: width input
 *  @height: height input
 *   Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **www;
	int w, z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mee = malloc(sizeof(int *) * height);
	if (www == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		www[w] = malloc(sizeof(int) * width);
		if (www[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(www[w]);
			}
			free(www);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (z = 0; z < width; z++)
		{
			www[w][z] = 0;
		}
	}
	return (www);
}
