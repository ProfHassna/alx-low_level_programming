#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a the alphabet in lowercase
 * Return: 0 (Success)
 */
int main()
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
	putchar(alphabet);
	}
	putchar(alphabet"\n");
	return (0);
}
