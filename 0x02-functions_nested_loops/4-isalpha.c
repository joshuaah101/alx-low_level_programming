#include "main.h"

/**
 * _isalpha - checks if a input is an alphabet
 * @x: the variable to check
 * Return: always 0
 */

int _isalpha(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
