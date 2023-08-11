#include <stdio.h>
/**
 * main - this is the entry point of the program
 * The program prints alphabets in lower case
 * Return: 0 for success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
