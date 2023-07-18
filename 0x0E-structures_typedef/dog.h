#ifndef DOG_H

#define DOG_H

/**
 * struct dog - a C structure on the name, age, owner of the dog
 * Description: new type struct dog with the following elements:
 * name, age, owner.
 * @name: a pointer to the name of the dog
 * @age: Age of the dog
 * @owner: A pointer to the owner of the dog
 */

struct dog
{
	char *name; /**< pointer to the name of the dog. */
	float age; /**< age of the dog. */
	char *owner; /**< pointer on the owner of the dog. */
};


void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct Dog - a typedef of struct dog
 * Description: new type struct dog with the following elements:
 * name, age, owner.
 * @name: a pointer to the name of the dog
 * @age: Age of the dog
 * @owner: A pointer to the owner of the dog
 *
 */

typedef struct
{
	char *name; /**< pointer to the name of the dog. */
	char *owner; /**< age of the dog. */
	float age; /**< pointer on the owner of the dog. */
} Dog;

void print_dog(struct dog *d);

typedef struct dog dog_t; /**< defining dog_t as the new name for struct dog. */

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
