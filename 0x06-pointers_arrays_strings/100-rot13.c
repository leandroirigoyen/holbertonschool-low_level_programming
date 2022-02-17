#include "main.h"
/**
 * rot13 - rot
 * @str: pointer
 * Return: 0
 */
char *rot13(char *str)
{
	int i;
	int j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{

	for (j = 0; j < 52; j++)
	{
		if (str[i] == a[j])
		{
			str[i] = b[j];
			break;
		}
	}
}

return (str);
}
