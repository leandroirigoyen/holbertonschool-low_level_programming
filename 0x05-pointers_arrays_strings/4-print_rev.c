#include "main.h"
#include <string.h>

/**
 * print_rev - prints reverse
 * @s: pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
