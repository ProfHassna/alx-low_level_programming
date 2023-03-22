#include "main.h"
#include <unistd.h>
/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer
 * Return: nothing
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; ++a)
	{
		for (b = 0; b <= 4; ++b)
		{
			if (b == 4)
				b = 0;
			for (c = 0; c <= 6; ++c)
			{
				if (c == 6)
					c = 0;
				for (d = 1; d <= 10; ++d)
				{
				if (d == 10)
					d = 0;
				_putchar(48 + a);
				_putchar(48 + b);
				_putchar(':');
				_putchar(48 + c);
				_putchar(48 + d);
				_putchar('\n');
				}
			}
		}
	}
}
