#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that  locates a character in a string.
 * @s: string
 * @c: charac to serch
 *
 * Return: a pointer to he first occurrence (success), NULL (fail)
 */

char *_strchr(char *s, char c)
{
	unsigned int i, n;
	char *p;

	n = 0;
	while (*(s + n) != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		if (*(s + i) == c)
		{
			p = &s[i];
			break;
		}
		else
			p = NULL;
	}
	return (p);

}
