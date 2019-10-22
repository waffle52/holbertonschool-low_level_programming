#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - Entry point
 * @name: pointer of char
 * @age: float
 * @owner: pointer of char
 * Description: copies data)?
 * Return: memory dog of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
	dog->name = name;
	}

	dog->age = age;

	if(owner != NULL)
	{
	dog->owner = owner;
	}


	return (dog);
}
