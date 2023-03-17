#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints number of base 16
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char alpha = 'a';

	for (i = 0; i <= 9; ++i)
	{
	putchar(48 + i);
	}
	while (alpha < 'g')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
