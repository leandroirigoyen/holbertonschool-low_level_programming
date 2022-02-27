#include "main.h"
#include <math.h>
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - recurision
 * @n: var n
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - actual_sqrt_recursion
 * @n: var n
 * @i: var i
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
