#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: pointer to struct
 * @name: pointer of char
 * @age: float
 * @owner: pointer of char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
