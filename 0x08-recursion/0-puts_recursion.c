#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - recursion
 * @s: pointer
 */
void _puts_recursion(char *s)
{

if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);


}
_putchar('\n');
}
