#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: min of int
 * @max: max of int
 * Return: pointer to the allocated memory.
 * returns null if it fails
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (0);

	p = malloc(sizeof(int) * (max - min + 2));
	if (p == 0)
		return (0);

	for (i = min; i <= max; i++)
		*(p + i) = i;

	*(p + i) = '\0';
	return (p);
}
