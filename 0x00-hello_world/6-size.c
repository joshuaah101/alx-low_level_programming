#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d %s", sizeof(char), "byte(s)\n");
	printf("Size of an int: %d %s", sizeof(int), "byte(s)\n");
	printf("Size of a long int: %d %s", sizeof(long int), "byte(s)\n");
	printf("Size of a long long int: %d %s", sizeof(long long int), "byte(s)\n");
	printf("Size of a float: %d %s", sizeof(float), "byte(s)\n");

	return (0);
}
