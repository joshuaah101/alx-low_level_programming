#include "main.h"

/**
 * print_line - to print a line
 * @n: variable to test
 * Return: void
 */

void print_line(int n)
{
	int i = 0;
	char line = '_';

	while (i < n && n > 0)
	{
		_putchar(line);
		i++;
	}
	_putchar('\n');
}
