#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk - strpbkr
 * @s: string s
 * @accept: string accept
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)

	char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
}
