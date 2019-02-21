#include "holberton.h"
/**
 * _strlen - returns the length of the string
 * @s: string to find length of
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	return (r);
}
