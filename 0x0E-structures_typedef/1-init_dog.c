#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable type struct dog
 * @d: the pointer to initialize the struct dog
 * @name: initialize the name
 * @age: initialize the age
 * @owner: initialize the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
