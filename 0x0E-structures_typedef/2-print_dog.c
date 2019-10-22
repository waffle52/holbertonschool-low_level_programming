#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Entry point
 * @d: pointer of struct
 * Description: prints a struct)?
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %p\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %p\n", d->owner);
		}
	}
}
