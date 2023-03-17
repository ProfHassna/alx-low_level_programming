#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that print numbers followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar(48 + i);
	i++;
	}
	putchar('\n');
	return (0);
}
