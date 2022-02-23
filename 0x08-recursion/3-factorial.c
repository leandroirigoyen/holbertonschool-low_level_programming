#include "main.h"
/**
 * factorial - factorial
 * @n: var int
 */
int factorial(int n)
{
	if (n < 0)
	{	return -1;

	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{
	return n * factorial(n - 1);
	}
return (0);
}
