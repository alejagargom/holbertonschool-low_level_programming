#include "holberton.h"
/**
 * _strcmp - compares 2 strings
 * @s1: string one to compare
 * @s2: string two to compare
 * Return: - 0 if same or integer
 */
int _strcmp(char *s1, char *s2)
{
	int c2s;

	for (c2s = 0; s1[c2s] == s2[c2s]; c2s++)
	{
		if (s1[c2s] == '\0')
			return (0);
	}
	return (s1[c2s] - s2[c2s]);
}
