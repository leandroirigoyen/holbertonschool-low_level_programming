#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * positive_or_negative - main
 * @n: var
 * Return: si da 0 esta bien
 */
void positive_or_negative(int n)
{

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
}
