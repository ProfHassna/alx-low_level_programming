#include "main.h"
#include <string.h>

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: pointer
 * @src: string
 * Return: nothings.
 */

char *_strcpy(char *dest, char *src)
{

	size_t i, n;

	n = 0;
	while (*(src + n) != '\0')
	{
		n++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
