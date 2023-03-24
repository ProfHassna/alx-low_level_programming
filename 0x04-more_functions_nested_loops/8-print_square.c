#include "main.h"
#include <stdio.h>

/**
 * print_square - A function that draws a square
 * @size: size of square
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	if (size > 0)
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	else
		_putchar('\n');
}
