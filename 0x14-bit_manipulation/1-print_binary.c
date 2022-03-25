#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * print_binary - Prints the binary 
  * @n: var long int n
  * Return: 0
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
