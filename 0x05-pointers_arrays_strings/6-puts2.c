#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - a function that prints every other character of a string
 * @str: param to print
 * Return: nothings.
 */

void puts2(char *str)
{
	int i, j;

	j = 0;
	while (str[j] != '\0')
		j++;
	for (i = 0; i <= j; i++)
	{
		if ((i % 2 == 0) && (str[i] != '\0'))
		_putchar(str[i]);
	}
	_putchar('\n');
}
