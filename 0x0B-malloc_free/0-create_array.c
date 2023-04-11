#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes it
 * @c: the first entry
 * @size: the size of the array
 *
 * Return: a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size);
	array[0] = c;

	return (array);
}
