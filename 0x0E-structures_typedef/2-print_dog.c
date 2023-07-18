#include "dog.h"
#include  <stdio.h>

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer to members
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("name : %s\n", d->name != NULL ? d->name : "(nil)");
	printf("owner : %s\n", d->owner != NULL ? d->owner : "(nil)");
	printf("Age : %f\n", d->age);
}
