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
	int s1 = strlen(dest);
	int s2 = strlen(src);
	int i;

	for (i = 0; i <= n && i < s2 && src[i] != '\0'; i++)
	{
		dest[s1 + i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[s1 + i] = '\0';
	}
	return (dest);
}
