#include "main.h"

/**
 * positive_or_negative - the function to test
 *
 * @n: the integer to check
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{

	if (n < 0)
	{
		printf("%d %s", n, "is negative\n");
	}
	else if (n == 0)
	{
		printf("%d %s", n, "is zero\n");
	}
	else
	{
		printf("%d %s", n, "is positive\n");
	}
	return;

}
