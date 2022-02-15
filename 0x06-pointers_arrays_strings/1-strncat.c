#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - cat
 * @dest: destination
 * @src: source
 * @n: var
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int dest_len = strlen(dest);

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[dest_len + j] = src[j];

	}
dest[dest_len + j] = '\0';


return (dest);
}
