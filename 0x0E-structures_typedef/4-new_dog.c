#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - Copies a string from src to dest
 * @dest: String to be copied to
 * @src: String to be copied from
 *
 * Return: Pointer to start of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strlen - Gets the length of the input string
 * @str: String input
 * Return: Number of indexes in a string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
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
	dog_t *newDog = NULL;
	char *newName;
	char *newOwner;
	int nameLen;
	int ownerLen;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nameLen = _strlen(name);
	newName = malloc(sizeof(char) * (nameLen + 1));
	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}

	ownerLen = _strlen(owner);
	newOwner = malloc(sizeof(char) * (ownerLen + 1));
	if (newOwner == NULL)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newName, name);

	newDog->age = age;

	newDog->owner = _strcpy(newOwner, owner);

	return (newDog);
}
