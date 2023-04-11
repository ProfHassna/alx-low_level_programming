#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string
 * @s2: string
 * Return: a pointer to newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0;
	int x = 0;
	int y = 0;
	int size;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	size = x + y;
	concat = malloc(sizeof(*s1) * x + sizeof(*s2) * y + 1);
	if (concat == NULL)
		return (0);
	while (i < x)
	{
		concat[i] = s1[i];
		i++;
	}
	y = 0;
	while (i < size)
	{
		concat[i] = s2[y];
		i++;
		y++;
	}
	concat[i] = '\0';

	return (concat);
}
