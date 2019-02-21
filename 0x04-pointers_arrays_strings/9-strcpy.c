#include "holberton.h"
/**
 * _strcpy - copies src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: no exist
 */
char *_strcpy(char *dest, char *src)
{
	int lth = 0, o;

	while (src[lth])
		lth++;

	for (o = 0; o <= lth - 1; o++)
	{
		dest[o] = src[o];
	}

	return (dest);
}
