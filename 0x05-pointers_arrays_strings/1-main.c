#include "main.h"

/**
 * main - main method
 * Return: 0
 */

int main(void)
{
	int a = 98;
	int b = 42;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
