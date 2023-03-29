#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - a function that copies a string
 * @*dest: string to append to
 * @*src: string to append
 * @n: num of bytes
 * Return: Pointer to the result.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncpy(dest, src, n);;
	return (ptr);
}
