#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: final string to the content and src
 * @src: string to append n characters to dest
 * @n: number of src characters to copy to dest
 * Return: combined string
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0;
	int s2;

	while (dest[s1])
	{
		s1++;
	}

	for (s2 = 0; src[s2] && (s2 < n); s2++)
	{
		dest[s1 + s2] = src[s2];
	}

	if (!dest[s1 + s2 + 1])
		dest[s1 + s2 + 1] = '\0';

	return (dest);
}
