#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - concatane two strings
 * @s1: first string
 * @s2: second string
 * Return: Ok = Empty string, Fail = Null
 */
char *str_concat(char *s1, char *s2)
{
	char *rtn;
	int p;
	int q = 0;

	rtn = malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL)
		return (s2);

	if else (s2 == NULL)
		return (s1);
	
	if else (s1 && s2 == NULL)
		return (rtn);


	for (p = 0; (rtn[q] = s1[p]) != '\0'; ++p, ++q)
	{
	}
	for (p = 0; (rtn[q] = s2[p]) != '\0'; ++p, ++q)
	{
	}
return (rtn);

}
