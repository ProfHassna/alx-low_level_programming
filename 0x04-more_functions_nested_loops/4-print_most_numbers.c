#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - A function that prints the nums from 0 to 9 except 2 &4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
