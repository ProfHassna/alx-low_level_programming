#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elmentes
 * @size: size of elements
 * Return: pointer to the allocated memory.
 * returns null if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	p = malloc(nmemb * size);
	if (p == 0 || nmemb == 0 || size == 0)
		return (0);
	else
		return (p);
}
