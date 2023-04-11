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
	unsigned int i = 0;

	if (size == 0)
		return (0);
	array = malloc(sizeof(*array) * size);
	if (array == NULL)
		return (0);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';

	return (array);
}
