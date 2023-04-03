#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, i;

	n = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
			n++;
	}
	return (n);
}

