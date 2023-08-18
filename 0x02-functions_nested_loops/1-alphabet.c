#include "main.h"
/**
 * main - this is the program entry point
 * it prints all lowercase alphabets
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
