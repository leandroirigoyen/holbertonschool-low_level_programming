#include "main.h"
/**
 * reverse_array - reverse
 * @a: pointer
 * @n: var
 */
void reverse_array(int *a, int n)
{
  int i;
  int aux [n];


	for (i = 0; i < n; i++)
{	
		aux[n - 1 - i] = a[i];
}
}
