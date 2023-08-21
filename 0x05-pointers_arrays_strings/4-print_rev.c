#include <string.h>
#include <stdio.h>
/**
 * print_rev - print a string in reverse
 * @s: pointer input
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--;)
	{
		putchar(s[i]);
	}
	putchar('\n')
}
