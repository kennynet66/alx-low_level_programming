#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function name to concatenate two strings
 * @dest: pointer input
 * @src: pointer input
 * Return: dest as the string
 */

char *_strcat(char *dest, char *src)
{
	int len1 = strlen(dest);
	int len2 = strlen(src);
	int i;

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + len2] = '\0';
	return (dest);
}
