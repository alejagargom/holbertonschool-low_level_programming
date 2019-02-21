#include "holberton.h"
/**
 *rev_string - print and reverse the string
 * @s: string to print and reverse
 * Return: no exist
 */
void rev_string(char *s)
{
	int lth = 0, r = 0;

	while (s[r++])
		lth++;

	for (r = 0; r < lth / 2; r++)
	{
		s[lth] = s[r];
		s[r] = s[lth - r - 1];
		s[lth - r - 1] = s[lth];
	}
	s[lth] = '\0';
}
