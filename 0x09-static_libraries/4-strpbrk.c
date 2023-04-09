#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: a pointer to s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *c;

	c = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == NULL)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					c = &s[i];
					break;
				}
			}
		}
	}
	return (c);
}
