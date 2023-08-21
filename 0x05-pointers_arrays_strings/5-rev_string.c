#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverse string provided
 * @s: Input pointe
 */
void rev_string(char *s)
{
	int length =  0, ind = 0;
	char trp;

	while (s[ind++])
	length++;

	for (ind = length - 1; ind >= length / 2; ind--)
	{
	trp = s[ind];

	s[ind] = s[length - ind - 1];
	s[length - ind - 1] = trp;
	}
}
