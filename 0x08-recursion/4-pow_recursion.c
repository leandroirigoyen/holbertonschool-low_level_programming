#include "main.h"
#include "math.h"
/**
 * _pow_recursion - pow
 * @x: intx
 * @y: inty
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int resultado;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);

	else
	{

		resultado = x * _pow_recursion(x, (y - 1));

		return (resultado);
	}

return (0);
}
