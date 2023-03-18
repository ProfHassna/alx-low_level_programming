#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints combinations of two two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i <= 98; ++i)
	{
		for (n = i + 1; n <= 99; ++n)
		{
			if (i <= n)
			{
			putchar(48 + (i / 10));
			putchar(48 + (i % 10));
			putchar(' ');
			putchar(48 + (n / 10));
			putchar(48 + (n % 10));
			if (i == 98 && n == 99)
				break;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
