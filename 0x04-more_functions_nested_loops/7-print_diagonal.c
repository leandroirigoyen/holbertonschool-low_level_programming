#include "main.h"
/**
 * print_diagonal - print_diagonal
 * @n: var
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');

			if (i < n)
			{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			}
		}
	}
	else
	{
			_putchar('\n');
	}
}
