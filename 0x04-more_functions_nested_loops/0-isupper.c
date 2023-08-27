#include "main.h"

/**
 * _isupper - Checks whether a character is in uppercase
 * @c: Input character
 * Return: returns 1 if is uppercase and 0 if other
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
