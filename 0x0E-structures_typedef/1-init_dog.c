#include "dog.h"

/**
 * init_dog - initialize a variable for struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
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
