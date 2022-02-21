#include "main.h"
#include <string.h>
/**
 * _strstr - strstr
 * @haystack: string
 * @needle: substring
 * Return: Pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *begin = haystack;
	char *pattern = needle;

	while (*haystack && *pattern && *haystack == *pattern)
	{
		haystack++;
		pattern++;
	}
	return (begin + 1);
}
