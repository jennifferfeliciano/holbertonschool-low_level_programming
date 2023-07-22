#include "dog.h"
#include <stdlib.h>

/**
 *free_dog- function to frees dog
 *@d: struct
 *Return: void
 */

void free_dog(dog_t *d)
{
if (d == NULL)
	return;
free(d->name);
free(d->owner);
free(d);
}
