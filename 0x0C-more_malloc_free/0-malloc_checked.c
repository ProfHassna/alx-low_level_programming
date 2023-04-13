#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	else
		return (p);
}
