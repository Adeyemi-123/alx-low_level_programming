#include "dog.h"
#include <string.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to member struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
