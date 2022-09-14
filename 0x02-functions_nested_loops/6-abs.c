#include "main.h"

/**
 * _bs - entry point
 * @n: n is an integer
 * Description: prints the absolute value of any number
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
