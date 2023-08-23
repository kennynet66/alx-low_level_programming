#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate two strings using the assigned value
 * @dest: input pointer
 * @src: input pointer
 * @n: parameter
 * @dest concatenated string
 * Return: dest concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest);
	int len2 = strlen(src);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + len2] = '\0';
	return (dest);
}
