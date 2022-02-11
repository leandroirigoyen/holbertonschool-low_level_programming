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
int temp;

len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_putchar('\n');
}

