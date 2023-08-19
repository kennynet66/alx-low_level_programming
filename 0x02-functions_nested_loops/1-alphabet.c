#include "main.h"
/**
 * main - this is the program entry point
 * it prints all lowercase alphabets
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
