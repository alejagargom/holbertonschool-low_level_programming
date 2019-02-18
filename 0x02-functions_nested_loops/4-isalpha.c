#include "holberton.h"

/**
 * _isalpha - checks if char is [A-Za-z]
 * @c: variable to evaluate
 *
 * Return: 1 if it is in [A-Za-z], 0 if not
 *
 */
int _isalpha(int c) /* char c */
{
	int output;

	if (((c >= 'a') && (c >= 'A')) || ((c <= 'z') && (c <= 'Z')))
	{
		output = 1;
	} else
	{
		output = 0;
	}
	return (output);
}
