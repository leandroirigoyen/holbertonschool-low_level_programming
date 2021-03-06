#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string
 * Return: The length of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to src
 * @dest: The buffer storing copy of str.
 * @src: The source
 * Return: pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogui;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogui = malloc(sizeof(dog_t));
	if (dogui == NULL)
		return (NULL);

	dogui->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogui->name == NULL)
	{
		free(dogui);
		return (NULL);
	}

	dogui->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogui->owner == NULL)
	{
		free(dogui->name);
		free(dogui);
		return (NULL);
	}

	dogui->name = _strcopy(dogui->name, name);
	dogui->age = age;
	dogui->owner = _strcopy(dogui->owner, owner);

	return (dogui);
}
