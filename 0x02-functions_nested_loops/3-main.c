#include "main.h"

/**
 * main - calls _islower function
i *
 * Return: always 0 
 */

int main()
{
	int r;
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
