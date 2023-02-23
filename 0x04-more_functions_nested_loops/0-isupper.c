#include "main.h"

/**
 * _isupper -checks for uppercases characters
 * @c: upper character to be used
 *
 * Return: 1 if the caracter is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
