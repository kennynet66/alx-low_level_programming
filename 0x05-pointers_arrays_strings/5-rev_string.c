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
	char temp;

	for (i = length - 1; i >= 0; i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
