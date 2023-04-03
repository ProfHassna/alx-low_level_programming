#include "main.h"

/**
 * _memcpy - a function that  copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: num of bytes
 *
 * Return: a pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);

}
