#include "main.h"
/**
 * clear_bit - value of index at 0
 * @n: pointer to bit
 * @index: index indices start at 0
 * Return: error -1
 *         correct 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
