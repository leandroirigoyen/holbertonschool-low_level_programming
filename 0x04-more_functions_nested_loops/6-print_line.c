#include "main.h"
/**
 * print_line -print_line
 * @n: var
 * Return: 0
 */
void print_line(int n)
{
int i;
if (n <= 0)
	_putchar('\n');
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
