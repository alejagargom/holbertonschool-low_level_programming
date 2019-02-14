#include "holberton.h"

/**
 * _abs - finds the absolute value of an integer
 * @two: number to evaluate
 *
 * Return: returns the absolute value
 *I check if two is less than zero
 */
int _abs(int two)
{
	if (two < 0)
		two = two * -1;
	return (two);
}
