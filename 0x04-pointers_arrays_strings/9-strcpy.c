#include "holberton.h"
/**
 * _strcpy - copies src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int o, ch;

	for (ch = 0; src[ch] != '\0'; ch++)
		;

	for (o = 0; o < ch; o++)
		dest[o] = src[o];
	return (dest);
}
