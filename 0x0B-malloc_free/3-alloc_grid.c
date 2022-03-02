#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * alloc_grid  - gird alloc
 * @width: width of array
 * @height: heigth of array
 * Return: NULL on failure, if width&&height <= 0 return NULL
 */
int **alloc_grid(int width, int height)
{
	int *arr;

	width = 0;
	height = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (malloc(width * height * sizeof(int) + 1));
	free(arr);


return (NULL);
}

