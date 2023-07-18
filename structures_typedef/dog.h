#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that contains data of a dog
 * @name: variable to store the dog's name
 * @age: variable to store the age of the dog
 * @owner: variable to store the dog owner's name
 *
 * Description: structure that holds information about a dog,
 * such as its name, age and owner.
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d); 

#endif
