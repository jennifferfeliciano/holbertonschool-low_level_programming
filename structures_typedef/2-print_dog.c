#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog- function that prints a structure values
 *@d: pointer to values
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: nil");

	else
		printf("%s\n", d->name);

	if (d->age >= 0)
		printf("%f\n", d->age);

	if (d->owner == NULL)
		printf("Owner:(nil)");

	else
		printf("%s\n", d->owner);

}
