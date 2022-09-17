#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the variable to test
 * Return: true ? 1 : 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
