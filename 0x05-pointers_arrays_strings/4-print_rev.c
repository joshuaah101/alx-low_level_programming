#include "main.h"

/**
 * print_rev - the function to test
 * @s: first the parameter to test
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
