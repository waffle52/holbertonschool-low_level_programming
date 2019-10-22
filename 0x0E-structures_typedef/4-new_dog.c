#include "dog.h"
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * @s1: pointer of char
 * @s2: pointer of char
 * Description: concatenates two strings)?
 * Return: new string memory
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(name) + sizeof(age) + sizeof(owner));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

return (dog);
}
