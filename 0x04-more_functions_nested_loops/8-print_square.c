#include "main.h"
/**
 * print_square - print square
 * @size: tamaño
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
