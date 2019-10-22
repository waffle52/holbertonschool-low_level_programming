#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Gets the length of the input string
 * @str: String input
 * Return: Number of indexes in a string
 */
int _strlen(char *str)
{
	int i;

	while (*str)
	{
		i++;
		str++;
	}

	return (i);
}

/**
 * _strcpy - Copies a string from src to dest
 * @dest: String to be copied to
 * @src: String to be copied from
 *
 * Return: Pointer to start of dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, c;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (c = 0; c <= a; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}

/**
 * *new_dog - Entry point
 * @name: pointer of char
 * @age: float
 * @owner: pointer of char
 * Description: copies data)?
 * Return: memory of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	int nl;
	int ol;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nl = _strlen(name);
	newDog->name = malloc(sizeof(char *) * (nl + 1));
	if (newDog->name == NULL)
	{
		free(newDog->name);
		return (NULL);
	}

	ol = _strlen(owner);
	newDog->owner = malloc(sizeof(char *) * (ol + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		return (NULL);
	}

	newDog->name = name;

	newDog->age = age;

	newDog->owner = owner;

	return (newDog);
}
