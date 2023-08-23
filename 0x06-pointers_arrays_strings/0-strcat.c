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

	for (int i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + len2] = '\0';
	return (dest);
}

int main(void)
{
    char s1[30] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
