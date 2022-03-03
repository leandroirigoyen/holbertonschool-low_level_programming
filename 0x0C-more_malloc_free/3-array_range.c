#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - array_range
 * @min: var int min
 * @max: var int max
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}
