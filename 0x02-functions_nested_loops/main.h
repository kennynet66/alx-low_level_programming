#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
/**
* main - This is the program entry point
* the program prints _putchar
* Return: 0 success exit status code
*/
void _putchar(char c)
{
	write(1, &c, 1);
}

void print_alphabet_x10(void)
{
	char letter;
	for (int num = 1; num <=10; num++)
		for(char letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	letter = 'a';
	_putchar('\n');
}
#endif
