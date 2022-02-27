#include "main.h"
/**
 * is_prime_number - prime number
 * @n: var int
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}
