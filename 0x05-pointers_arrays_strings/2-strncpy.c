#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copy a string
 * @dest: final string
 * @src: source string
 * @n: number of characters to copy
 * Return: dest (new string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cs;

	for (cs = 0; cs < n && src[cs]; cs++)
	{
		dest[cs] = src[cs];
	}
	for (; cs < n; cs++)
		dest[cs] = '\0';

	return (dest);
}
