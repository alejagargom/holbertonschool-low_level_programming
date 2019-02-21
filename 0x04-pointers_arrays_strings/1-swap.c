#include "holberton.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer point
 * @b: integer point
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
