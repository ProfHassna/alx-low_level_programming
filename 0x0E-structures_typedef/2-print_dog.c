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
	char *x = "nil";

	if (d->name == NULL)
		d->name = x;
	if (d->owner == NULL)
		d->owner = x;
	if (d != 0)
	{
		printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("nil\n");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
