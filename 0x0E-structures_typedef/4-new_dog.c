#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: return new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));


	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);

	return (new_dog);
}
