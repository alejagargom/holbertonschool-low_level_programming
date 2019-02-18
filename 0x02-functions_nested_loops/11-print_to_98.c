#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - print numbers n to 98
 * @n: number to calculate
 *
 * Return: print to output numbers n to 98 followed and a newline.
 */
void print_to_98(int n)
{
        if (n == 98)
        {
                printf("%d", n);
        }
        else if (n < 98)
        {
                for (; n <= 98; n++)
                {
                        printf("%d", n);
                        if (n != 98)
                        {
                                printf(", ");
                        }
                }
        }
        else
        {
                for (; n >= 98; n--)
                {
                        printf("%d", n);
                        if (n != 98)
                        {
                                printf(", ");
                        }
                }
        }
        printf("\n");
}
