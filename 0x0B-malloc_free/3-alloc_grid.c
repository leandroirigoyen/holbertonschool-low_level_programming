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

	if (width <= 0 || height <= 0)
		return (NULL);
	
	else
	return (malloc(width * height * sizeof(int)));

}

