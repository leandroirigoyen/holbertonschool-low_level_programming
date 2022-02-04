#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * * main - main
 * * Return: algo
 */
int main(void)
{

int x;
char sl = '\n';

for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}

for (x = 'A'; x <= 'Z'; x++)
{
putchar(x);
}

putchar(sl);
return (0);

}
