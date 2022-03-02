#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - array of chars
 * @size: unsigned int var
 * @c: var c
 * Return: NULL if size is 0, return a pointer to the aray or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
	return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);

}

