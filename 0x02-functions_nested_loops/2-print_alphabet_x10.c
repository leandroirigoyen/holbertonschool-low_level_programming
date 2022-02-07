#include <stdlib.h>
#include "_putchar.c"


/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
char ch;
int i;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);


}
_putchar('\n');
}


return (0);
}
