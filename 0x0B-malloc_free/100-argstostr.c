#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all args pf the program
 * @ac: num of arg
 * @av: array of arg
 * Return: a pointer to the new tring or null if it fails
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i,k = 0, j = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (0);
	
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 'n')
			j++;
		size+= j + 1;
	}
	concat = malloc(sizeof(char *) * size + 1);

	if (concat == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			concat[k] = av[i][j];
			j++;
			k++;
		}
		concat[k] = '\n';
		k++;
	}

	concat[k] = '\0';

	return (concat);
}
