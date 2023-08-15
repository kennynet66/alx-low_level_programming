#include <stdio.h>
/**
* main - This is the program entry point
* the program prints _putchar
* Return: 0 success exit status code
*/
int print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
