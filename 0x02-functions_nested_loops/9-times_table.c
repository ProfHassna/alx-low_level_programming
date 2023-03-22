#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * times_table - A function that prints the 9 times table starting with 0
 * Return: nothing
 */
void times_table(void)
{
	int a, b, i;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			i = a * b;
			_putchar(48 + i);
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				if (b == 9)
				_putchar('$');
		}
			_putchar('\n');
	}
}
