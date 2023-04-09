#include "main.h"
#include <stddef.h>
/**
 * _strstr - searches a string for any of a set of bytes
 *
 * @haystack: segment to return bytes from
 * @needle: the bytes to include
 *
 * Return: a pointer to s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	*haystack = *needle;
	return (haystack);
}
