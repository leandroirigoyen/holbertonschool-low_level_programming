#include <stdio.h>
/**
 * main - main
 * Return: el return tiene que dar 0
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;


printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
printf("Size of a long int: %zu bytes(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));


	return (0);
}
