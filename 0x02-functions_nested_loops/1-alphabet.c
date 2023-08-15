#include <stdio.h>
#include "main.h"
/**
 * main - this is the program entry point
 * it prints all lowercase alphabets
 * Return: Always 0
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
