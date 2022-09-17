#include "main.h"

/**
 * print_square - to print a square
 * @n: variable to test
 * Return: void
 */

void print_square(int n)
{
	int i = 0, j;
	char hash = '#';

	while (i < n && n > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar(hash);
			j++;
		}
		
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
