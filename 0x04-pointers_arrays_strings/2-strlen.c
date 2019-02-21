#include "holberton.h"
/**
 * _strlen - output length of a string
 * @s: character
 * output: length of string
 */
int _strlen(char *s)
{
	int r;

	while (*(s + r))
	{
		r++;
	}
	return (r);
}
