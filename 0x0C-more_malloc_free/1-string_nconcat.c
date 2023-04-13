#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: num of bytes to concatenate
 * Return: pointer to the allocated memory.
 * in case of failure, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, *null = "";
	unsigned int i, j, size;

	if (n >= sizeof(*s2))
		size = sizeof(*s1) + sizeof(*s2);
	else
		size = sizeof(*s1) + n;
	p = malloc(size + 1);
	if (p == 0)
		return (0);
	i = 0;
	if (s1 == NULL)
		s1 = null;
	if (s2 == NULL)
		s2 = null;
	while (s1[i])
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	for (j = 0; j < n; j++)
	{
		*(p + i) = *(s2 + j);
		i++;
	}
	*(p + i) = '\0';
	return (p);

}
