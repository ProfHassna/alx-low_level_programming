#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i, n, x;

	i = 0;
	while (i <= 9)
	{
	for (n = 1; n <= 9; ++n)
	{
		if (i < n)
		{
		for (x = 2; x <= 9; ++x)
		{
			if (n < x)
			{
			putchar(48 + i);
			putchar(48 + n);
			putchar(48 + x);
			if (i == 7 && n == 8 && x == 9)
			break;
			putchar(',');
			putchar(' ');
			}
		}
		}
	}
		i++;
	}
	putchar('\n');
	return (0);
}
