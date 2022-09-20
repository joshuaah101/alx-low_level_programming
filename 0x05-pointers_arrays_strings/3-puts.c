#include "main.h"

/**
 * _puts - the function to test
 * @str: first the parameter to test
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
