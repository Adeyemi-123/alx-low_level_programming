#ifndef DOG_H

#define DOG_H

/**
 * struct dog - a C structure on the name, age, owner of the dog
 * Description: new type struct dog with the following elements:
 * name, age, owner.
 * @name: a pointer to the name of the dog
 * @age: Age of the dog
 * @owner: A pointer to the owner of the dog
 * Return: void
 */

struct dog
{
	char name[100]; /**< pointer to the name of the dog. */
	float age; /**< age of the dog. */
	char owner[100]; /**< pointer on the owner of the dog. */
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
