#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - A program that prints the alphabets in lowercass
 * Return: nothing
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		_putchar(x);
	}
	_putchar('\n');
}
