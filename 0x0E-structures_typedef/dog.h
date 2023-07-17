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
	char *name; /**< pointer to the name of the dog. */
	float age; /**< age of the dog. */
	char *owner; /**< pointer on the owner of the dog. */
};

#endif /* DOG_H */
