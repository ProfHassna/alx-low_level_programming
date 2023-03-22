#include "main.h"
#include <unistd.h>
/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, n;

	for (i = 0; i <= 23; ++i)
	{
		for (n = i + 1; n <= 59; ++n)
		{
			if (i <= n)
			{
				_putchar(48 + (i / 10));
				_putchar(48 + (i % 10));
				_putchar(':');
				_putchar(48 + (n / 10));
				_putchar(48 + (n % 10));
				_putchar('\n');
			}
		}
	}
}
