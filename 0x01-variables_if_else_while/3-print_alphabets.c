#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - main
 *   * Return: algo
 *    */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int str_upr(char *cstr)
{
char *str = cstr;
for (; *str; str++)
{
if (isalpha(*str))
*str += 'a' - 'A';
}
}
return (0);
}
