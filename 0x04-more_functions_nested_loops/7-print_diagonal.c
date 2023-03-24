#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: num of times
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n > 0)
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	else
		_putchar('\n');
}
