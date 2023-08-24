#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copies a character array
 * @dest: input pointer
 * @src: input pointer
 * @n: parameter interger
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
