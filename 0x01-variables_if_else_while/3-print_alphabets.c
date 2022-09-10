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

	for (a = 'A'; a <= 'Z'; a++)
	{
		char x = tolower(a);

		putchar(x);
	}
	for (a = 'a'; a <= 'z'; a++)
	{
		char y = toupper(a);

		putchar(y);
	}
	putchar('\n');
	return (0);

}
