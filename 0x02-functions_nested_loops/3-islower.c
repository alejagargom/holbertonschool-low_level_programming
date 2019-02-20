#include "holberton.h"

/**
 * _islower - checks for lower case characters
 * @c: variable to evaluate
 *
 * Return: 1 if it is lowercase, 0 if not
 *
 */
int _islower(int c) /* char c */
{
	int output;

	if (c >= 'a' && c <= 'z')
	{
		output = 1;
	} else
	{
		output = 0;
	}
	return (output);
}
