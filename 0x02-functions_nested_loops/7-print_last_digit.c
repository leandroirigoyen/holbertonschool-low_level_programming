#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - imprimir ultimo digito
 * @n: var
 * Return: value of the last digit
 */

int print_last_digit(long int n)

{
if (n > 0)
{
_putchar((n % 10) + '0');
return (n % 10);
}
else
{
_putchar (((n * -1) % 10) + '0');
return ((n * -1) % 10);
}


return (0);
}
