#include "main.h"
#include <string.h>
/**
 * _strchr - _strchr
 * @s: pointer
 * @c: var of type char
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
