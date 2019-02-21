#include "holberton.h"
/**
 * _strcpy - copy src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: no exist
 */
char *_strcpy(char *dest, char *src)
{
	int lth = 0, r;

	while (src[lth])
		lth++;

	for (r = 0; r <= lth - 1; r++)
	{
		dest[r] = src[r];
	}

	return (dest);
}
