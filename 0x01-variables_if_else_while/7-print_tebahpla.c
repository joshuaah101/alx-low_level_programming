#include <stdlib.h>

#include <ctype.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'Z'; a >= 'A'; a--)
	{
		char x = tolower(a);

		putchar(x);
	}
	putchar('\n');
	return (0);

}
