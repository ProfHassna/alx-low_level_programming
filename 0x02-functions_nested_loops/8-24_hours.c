#include "main.h"
#include <unistd.h>
/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer
 * Return: nothing
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <=2 && b <= 3))
			{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
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
}
