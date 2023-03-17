#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a the alphabet in lowercase except q & e
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
	if (alphabet != 'q' && alphabet != 'e')
	{
	putchar(alphabet);
	}
	}
	putchar('\n');
	return (0);
}
