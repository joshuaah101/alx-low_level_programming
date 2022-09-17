#include "main.h"

/**
 * print_triangle - to print a triangle
 * @size: variable to test
 * Return: void
 */

void print_triangle(int size)
{
	int i = 1, j;
	char hash = '#';

	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar(hash);
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}
