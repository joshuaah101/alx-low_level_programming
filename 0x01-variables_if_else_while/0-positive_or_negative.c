#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d %s", n, "is negative");
	}
	else if (n == 0)
	{
		printf("%d %s", n, "is zero");
	}
	else
	{
		printf("%d %s", n, "is positive");
	}
	
	return (0);

}
