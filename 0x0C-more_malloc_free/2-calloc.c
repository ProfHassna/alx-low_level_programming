#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset -  initializes n bytes of memory to x
 * @ptr: initial adress
 * @x: variable to initialize with
 * @n: number of bytes to initialize
 *
 * Return: Return pointer char (so movements are 1 byte)
 */
char *_memset(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = x;

	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elmentes
 * @size: size of elements
 * Return: pointer to the allocated memory.
 * returns null if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;


	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	_memset(p, 0, size * nmemb);

	return (p);
}
