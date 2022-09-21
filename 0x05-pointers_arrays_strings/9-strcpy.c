#include "main.h"

/**
 * *_strcpy - the function to copy string
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
