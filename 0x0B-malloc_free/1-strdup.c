#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string(duplicate of str)
 * @str: string to duplicate
 * Return: a pointer to the array.
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int size = 0;

	if (str == NULL)
		return (0);
	while (str[size] != '\0')
		size++;
	dup = malloc(sizeof(*str) * size + 1);
	if (dup == NULL)
		return (0);
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';

	return (dup);
}
