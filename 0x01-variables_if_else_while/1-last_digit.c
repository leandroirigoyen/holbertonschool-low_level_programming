#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main
 * Return: return
 */

int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit=n%10;

if (lastDigit > 5)
{
printf("Last Digit of %d and is %d greater than 5\n", n, n%10);
}
else if (lastDigit == 0)
{
printf("and is 0");
}
else if ((lastDigit < 6) && (lastDigit != 0))
{
printf("and is less than 6 and not 0");
}

return (0);
}
