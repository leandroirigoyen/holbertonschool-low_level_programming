#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - put half of string
 * @str: pointer
 */
void puts_half(char *str)
{
int length;
int mid;
int i;
int k;

length = strlen(str);
mid = length / 2;

for (i = 0; i < mid; i++)
{
leftHalf[i] = str[i];
}
leftHalf[i] = '\0';

for (i = mid, k = 0; i <= length; i++, k++)
{
	rightHalf[k] = str[i];
}
_putchar(%s\n);
}
