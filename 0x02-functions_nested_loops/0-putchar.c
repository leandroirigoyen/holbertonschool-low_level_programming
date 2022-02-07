#include <unistd.h>
#include "_putchar.c"
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
