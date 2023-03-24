#include "main.h"
#include <stdio.h>

/**
 * print_triangle - A function that draws a diagonal line on the terminal
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	i = 1;
	if (size > 0)
		while (i <= size)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
				_putchar('\n');
			i++;
		}
	else
		_putchar('\n');
}
