#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a the alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
