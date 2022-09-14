#include "main.h"

/**
 * _islower - checks if a letter is lowecase
 * @x: the variable to check
 * Return: always 0
 */

int _islower(int x)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		if (x == count)
		{
			return (1);
		}
	}
	return (0);
}
