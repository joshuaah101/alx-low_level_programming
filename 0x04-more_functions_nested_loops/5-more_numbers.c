#include "main.h"

/**
 * more_numbers - a function that prints times 10 of a
 * sequence of numbers
 * Return: void
 */

void more_numbers(void)
{
	char n, c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
		i++;
	}
}
