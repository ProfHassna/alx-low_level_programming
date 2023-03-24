#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A function that prints 10 timesthe numbers, from 0 to 14
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	for (j = 0; j < 10; ++j)
	{
		while (i <= 14)
		{
			if (i <= 9)
				_putchar(48 + i);
			else
			{
				_putchar(48 + i / 10);
				_putchar(48 + i % 10);
			}
			i++;
		}
		_putchar('\n');
		i = 0;
	}
}
