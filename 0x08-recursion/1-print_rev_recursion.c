#include "main.h"
/**
 * _print_rev_recursion - rev recursion
 * @s: pointer
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
