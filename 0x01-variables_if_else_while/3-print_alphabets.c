#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a the alphabet in lowercase then uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char low, upper;

	for (low = 'a'; low <= 'z'; ++low)
	{
	putchar(low);
	}
	for (upper = 'A'; upper <= 'Z'; ++upper)
	{
	putchar(upper);
	}
	putchar('\n');
	return (0);
}
