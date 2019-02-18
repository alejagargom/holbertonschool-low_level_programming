#include "holberton.h"

/**
 * int_islower - checks for lower case characters
 * @c: variable to evaluate
 *
 *
 *
 */
int _islower(int c)
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
