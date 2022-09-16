#include "main.h"

/**
 * largest_number - the function that checks for the largest of 3 numbers
 * @a: the first number
 * @b: the second number
 * @c: the third number
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
