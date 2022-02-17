#include "main.h"
/**
 * cap_string - capitalize
 * @c: pointer
 * Return: 0
 */
char *cap_string(char *c)
{
	int i, j;

	char str[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (c[i] == str[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				{
					c[i + 1] -= 32;
				}
			}
		}
	}

	return (c);
}
