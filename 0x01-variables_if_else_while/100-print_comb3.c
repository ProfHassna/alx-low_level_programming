#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i, n;

	i = 0;
	while (i <= 9)
	{
		for (n = 1; n <= 9; ++n)
		{
			if (i < n)
			{
				putchar(48 + i);
				putchar(48 + n);
				if (i == 8 && n == 9)
				break;
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
