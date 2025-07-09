#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog.
 * @d: pointer to the dog structure to be freed.
 *
 * Description - frees the memory allocated for a dog_t structure.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
