#include "main.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints the numbers, from 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
