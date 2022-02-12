#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - put half of string
 * @str: pointer
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len / 2) + 1;
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
