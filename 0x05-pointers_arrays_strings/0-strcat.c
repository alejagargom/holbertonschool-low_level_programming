#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: final string to contain original content and src
 * @src: string to append to dest
 * Return: combined string (new=dest+src)
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2;

	while (dest[s1])
	{
		s1++;
	}

	for (s2 = 0; src[s2]; s2++)
	{
		dest[s1 + s2] = src[s2];
	}
	dest[s1 + s2 + 1] = '\0';

	return (dest);
}
