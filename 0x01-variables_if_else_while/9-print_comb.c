#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints combination of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
	putchar(48 + i);
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}