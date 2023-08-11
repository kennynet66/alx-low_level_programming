#include <stdio.h>
/**
 * main - This is the entry point
 * This code prints the lowercase alphabets in reverse
 * Return: 0 success exit code
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
