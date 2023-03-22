#include "main.h"
/*#include <unistd.h>*/
/**
 * print_alphabet - A program that prints 10 times the alphabets in lowercass
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; ++x)
		{
			_putchar(x);
		}
		i++;
		_putchar('\n');
	}
}
