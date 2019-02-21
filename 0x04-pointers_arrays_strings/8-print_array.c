#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints the n elements of array of int
 * @a: array
 * @n: elements to be printed
 * Return: no exist
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		if (r != 0)
		{
			printf(", ");
		}
		printf("%d", a[r]);
	}
	printf("\n");
}
