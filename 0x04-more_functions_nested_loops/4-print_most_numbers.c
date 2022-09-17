#include "main.h"

/**
 * print_most_numbers - print numbers between 0 - 9
 * skipping the numbers 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i = 48;

	while (i <= 57)
	{
		_putchar(i + '0');
		if (i == 50)
		{
			continue;
		}
		else if (i == 52)
		{
			continue;
		}
		i++;
	}
	_putchar('\n');
}
