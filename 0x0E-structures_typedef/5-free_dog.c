#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees struct dog
 * @d: pointer to members of struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
