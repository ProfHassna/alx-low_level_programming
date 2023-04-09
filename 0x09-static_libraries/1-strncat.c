#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings
 * @dest: string to append to
 * @src: string to append
 * @n: n bytes from src
 * Return: Pointer to the result.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
