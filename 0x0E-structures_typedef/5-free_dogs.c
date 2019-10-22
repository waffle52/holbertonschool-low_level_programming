#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: pointer of dog_t
 * Description: free memory by d)?
 */

void free_dog(dog_t *d)
{
	free(d);
}
