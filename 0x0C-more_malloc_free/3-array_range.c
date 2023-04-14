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
	int *p, i, s, j;

	if (min > max)
		return (0);
	s = max - min + 1;
	p = malloc(sizeof(int) * s + 1);
	if (p == 0)
		return (0);

	j = min;
	for (i = 0; j <= max; i++)
	{
		*(p + i) = j;
		j ++;
	}
	*(p + i) = '\0';
	return (p);
}
