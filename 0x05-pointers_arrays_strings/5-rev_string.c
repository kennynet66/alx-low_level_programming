#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverse string provided
 * @s: Input pointe
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char reversed[length + 1];

	for (i = length - 1; i >= 0; i--)
	{
		reversed[length - 1 - i] = s[i];
	}
	reversed[length] = '\0';
	strcpy(s, reversed);
}
