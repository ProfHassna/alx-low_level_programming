#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings
 * @*dest: string to append to
 * @*src: string to append
 * @n: num of bytes
 * Return: Pointer to the result.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);;
	return (ptr);
}
