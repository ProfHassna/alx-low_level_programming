#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that print numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
	printf("%d", i);
	i++;
	}
	putchar('\n');
	return (0);
}
