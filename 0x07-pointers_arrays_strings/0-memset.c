#include "main.h"
#include <string.h>
/**
 * _memset - _memset
 * @s: pointer
 * @b: var char b
 * @n: var int n
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}
