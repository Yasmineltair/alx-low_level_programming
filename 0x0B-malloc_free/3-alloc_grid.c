#include "main.h"

/**
  * alloc_grid -  function that returns a
  * pointer to a 2 dimensional array of integers.
  * @width: array width
  * @height: array height
  * Return: pointer
  */

int **alloc_grid(int width, int height)
{
int **array;
int i, j;
array = malloc(sizeof(*array) * height);
if (width <= 0 || height <= 0 || array == 0)
{
	return (NULL);
}
else
{
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(**array) * width);
		if (array[i] == 0)
		{
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
}
return (array);
}
