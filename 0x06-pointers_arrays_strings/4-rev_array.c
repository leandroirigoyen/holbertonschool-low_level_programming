#include "main.h"
/**
 * reverse_array - reverse
 * @a: pointer
 * @n: var
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;


	for (i = 0; i < (n / 2); i++)
{
		aux = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - i] = aux;
}
}
