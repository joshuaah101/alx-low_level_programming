#include "main.h"

/**
 * swap_int - the function to test
 * @a: first the parameter to test
 * @b: second parameter to test
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
