#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nill\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("nill\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("nill\n");
	else
		printf("Owner: %s\n", d->owner);
}
