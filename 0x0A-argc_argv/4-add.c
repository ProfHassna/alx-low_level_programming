#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */
int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, res;

	i = 1;
	res = 0;
	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				res += atoi(argv[i]);
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
