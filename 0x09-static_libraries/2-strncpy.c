#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - a function that copies a string
 * @dest: string to append to
 * @src: string to append
 * @n: num of bytes
 * Return: Pointer to the result.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
