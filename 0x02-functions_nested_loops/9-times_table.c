#include "main.h"
/**
 * times_table - table
 * Return: void
 */

void times_table(void)
{

int i;
int j;
int k;

i = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
k = i *j;

if ((k / 10) + '0' != '0')
{
_putchar((k / 10) + '0');
} else
{
if (j != 0)
{
_putchar(' ');
}
}
_putchar((k % 10) + '0');

if (j != 9)
{
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}
