#include "holberton.h"
/**
 * _isalpha - checks Mm
 * @Mm:my variable Mm is greater than or equal to 97 and less than 122
 * in minuscule and the same in upper case Mm 65 to 90
 *
 * Return: 1 if is Mm 0 if not
 */
int _isalpha(int Mm)
{
	if ((Mm >= 97 &&  Mm <= 122) || (Mm >= 65 && Mm <= 90))
		return (1);
	return (0);
}
