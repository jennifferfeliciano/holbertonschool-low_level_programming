#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 *new_dog- function that creates a new dog with the given parameters
 *@name: pointer to the new dog's name
 *@age: new dog's age
 *@owner: pointer to dog owner's name
 *Return: pointer to the new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)

		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
		free(new_dog);

	strcpy(new_dog->name, name);
	new_dog->age = age;

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);

	return (new_dog);
}
