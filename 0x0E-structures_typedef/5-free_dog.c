#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: pointer of dog_t
 * Description: free memory by d)?
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);

}
