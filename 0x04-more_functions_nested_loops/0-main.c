#include "main.h"

/**
 * main - testing ground to know the uppercase of a character
 *
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}