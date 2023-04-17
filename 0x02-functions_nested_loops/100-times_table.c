#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_times_table - A function that prints the n times table, starting with 0
 * @n: n times table
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, c, d, i, j, k;

	if ((n > 15) || (n < 0))
		_putchar('\n');
	else
	{
		for (a = 0; a <= n; ++a)
		{
			for (b = 0; b <= n; ++b)
			{
				c = a * b;
				if (c > 99)
				{
					d = c % 10;
					i = c / 100;
					j = i / 10;
					k = i % 10;
					_putchar(' ');
					_putchar(j + '0');
					_putchar(k + '0');
					_putchar(d + '0');
					if (b != n)
						_putchar(',');
				}
				else
					if (c > 9)
					{
						d = c % 10;
						i = c / 10;
						_putchar(' ');
						_putchar(i + '0');
						_putchar(d + '0');
						if (b != n)
							_putchar(',');
					}
					else
					{
						_putchar(' ');
						_putchar(c + '0');
						if (b != n)
							_putchar(',');
					}
				}
			_putchar('\n');
		}
	}
}
