#include "main.h"

/**
 * main - to print _putchar to stdout
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, size = sizeof(str) / sizeof(int);

	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
