#include "main.h"

/**
 * rev_string - the function to test
 * @s: first the parameter to test
 *
 * Return: void
 */

void rev_string(char *s)
{
	int size = strlen(s) - 1, i;

	for (i = size; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
