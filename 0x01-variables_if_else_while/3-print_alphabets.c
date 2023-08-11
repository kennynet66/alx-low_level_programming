#include <stdio.h>
/**
 * main - this is the entry point of the program
 * The program prints alphabets in lower case
 * Return: 0 for success
 */
int main(void)
{
	char letter;
	char Letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	for (Letter = 'A'; Letter <= 'Z'; Letter++)
	{
	putchar(Letter);
	}
	putchar('\n');
	return (0);
}
