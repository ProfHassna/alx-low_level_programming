#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int n, i;
	char *p;

	n = 0;
	for (i = 0; accept[i] <= '\0'; i++)
	{
		for (; s[n] <= '\0'; n++)
		{
			if (s[n] == accept[i])
				*(p + n) = s[n];
		}
	}
	return (p);
}

