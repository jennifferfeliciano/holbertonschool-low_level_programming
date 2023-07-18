#include <stdio.h>
#include "dog.h"

/**
 *init_dog- function that initializes a struct dog values
 *@d: Pointer to the structure
 *@name: pointer to the dog's name
 *@age: pointer to the dog's age
 *@owner: pointer to the dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
