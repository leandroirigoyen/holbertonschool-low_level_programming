#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main
 * Return: algo
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
for (int x = 'A'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
return (0);
}
