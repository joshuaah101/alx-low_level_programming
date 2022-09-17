#include "main.h"

/**
 * print_diagonal - to print a diagonal line
 * @n: variable to test
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;
	char line = '\\';

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(line);
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
