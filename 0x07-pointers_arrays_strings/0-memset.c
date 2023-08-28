#include "main.h"

/**
 * _memset - sets buffers of memory
 *
 * @s: pointer array
 * @b: content of the buffer
 * @n: size of the array
 * Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
