#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a var dog
 * @d: the dog tofree
 *
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
