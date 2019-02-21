#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - function copy the string pointed
 * @dest: destination pointer
 * @src: source ponter
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int cp = 0;

	do {
		*(dest + cp) = *(src + cp);
		cp++;
	}

	 while (*(src + cp - 1) != '\0');
		return (dest);
}
