#include "main.h"
#include <stdio.h>

/**
 * print_line - A function that draws a straight line
 * @n: num of line
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	i = 1;
	if (n > 0)
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
}
