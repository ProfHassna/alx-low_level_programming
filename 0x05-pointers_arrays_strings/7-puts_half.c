#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * @str: param to print
 * Return: nothings.
 */

void puts_half(char *str)
{
	int i, j;

	j = 0;
	while (str[j] != '\0')
		j++;
	if (j % 2 == 0)
		i = j / 2;
	else
		i = (j - 1) / 2;
	for (; i <= j; i++)
	{
		if (str[i] != '\0')
		_putchar(str[i]);
	}
	_putchar('\n');
}
