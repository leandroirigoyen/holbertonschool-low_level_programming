#include "main.h"
/**
 * print_chessboard
 * @a: pointer array 8
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int length;
	int width;
	int i;
	int j;

	for (i = 1; i = length; i++)
	{
		for (j = 1; j <= width; j++)
		{
			if ((i+x) %2 == 0)
			{
				_putchar("[a]");
			}
			else
				_putchar("[ ]");
		}
		_putchar("\n");
	}
	return 0;
}
