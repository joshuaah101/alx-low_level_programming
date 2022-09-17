#include "main.h"

/**
 * _isdigit - checks for a digit 0 - 9
 * @c: the variable to test
 * Return: true ? 1 : 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
