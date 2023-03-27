#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * @str: param to print
 * Return: nothings.
 */

void puts_half(char *str)
{
	int a,n, longi;

	longi = 0;
	for (a = 0;str[a] != '\0'; a++)
		longi++;
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	n = (longi) / 2;
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
