#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest: string to append to
 * @src: string to append
 * Return: Pointer to the result.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
