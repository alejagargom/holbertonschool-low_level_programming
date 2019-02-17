#include "holberton.h"

/**
 * _islower - checks lowercase c.
 *@letter: checking if letter is lowercase or not
 *
 * Return: 0-not lowercase 1- is lowercase
 */
int _islower(int letter)
{
	if (letter >= 97 &&  letter <= 122)
	{
		return (1);
	}
		return (0);
}
