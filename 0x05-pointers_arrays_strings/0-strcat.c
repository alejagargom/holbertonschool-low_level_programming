#include "holberton.h"

/**
 * _isupper - detect if c is upper case character
 * @c: char to evaluate
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	int o;

	if ((c >= 'A') && (c <= 'Z'))
	{
		o = 1;
	} else
	{
		o = 0;
	}

	return (o);
}
