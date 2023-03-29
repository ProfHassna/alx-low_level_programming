#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings
 * @*dest: string to append to
 * @*src: string to append
 * Return: Pointer to the result.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);;
	return (ptr);
}
