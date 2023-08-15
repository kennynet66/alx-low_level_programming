#include <stdio.h>
/**
* main - This is the program entry point
* the program prints _putchar
* Return: 0 success exit status code
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
}
