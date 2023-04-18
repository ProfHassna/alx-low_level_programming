#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a variable of type struct dog
 * @d: variable struct dog
 *
 *
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	while (d != 0)
	{
		if (d->name == NULL)
			printf("nil\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("nil\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
