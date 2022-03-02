#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: pointer to the string str
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *p;
	if (str == NULL)
		return (NULL);

	p = malloc(strlen(str) + 1);
	if (p == NULL)
		return (NULL);
	strcpy(p, str);
	return (p);
}


