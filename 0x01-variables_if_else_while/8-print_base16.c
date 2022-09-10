#include <stdlib.h>

#include <ctype.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long i;
	char a;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		if(a == 'f')
		{
			break;
		}
	}	
	putchar('\n');
	return (0);

}
