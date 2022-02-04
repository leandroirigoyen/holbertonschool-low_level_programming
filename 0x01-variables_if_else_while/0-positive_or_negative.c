#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main
 * Return: si da 0 esta bien
 */
int main(void)
{	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
