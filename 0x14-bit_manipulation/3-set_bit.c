#include "main.h"
/**
 * set_bit - set the value of a bit to 1.
 * @n: pointer
 * @index: The index indices start at 0
 * Return: error -1
 *         correct 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
