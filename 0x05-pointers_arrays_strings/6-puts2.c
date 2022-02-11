#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - putss
 * @str: pointer
 * Return: 0
 */
void puts2(char *str)
{
int i;
	for (i = 0; i < (int)strlen(str); i += 2)
	{
		_putchar(str[i]);
}
}
