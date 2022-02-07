#include "main.h"
#include <unistd.h>
#include "_putchar.c"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
/**
 * main - prints _putchar
 * Return: algo
 */
int main(void)
{
char word[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
int i;

for (i = 0; i < 9; i++)
{
_putchar(word[i]);

}




return (0);
}
