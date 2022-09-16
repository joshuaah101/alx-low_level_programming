#include "main.h"

/**
 * positive_or_negative - the function that tests the sign of an integer number
 *
 * @i: the variable to test
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d %s", i, "is negative\n");
	}
	else if (i > 0)
	{
		printf("%d %s", i, "is positive\n");
	}
	else
	{
		printf("%d %s", i, "is zero\n");
	}
}
