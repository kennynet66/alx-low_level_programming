#include <stdio.h>
/**
 * main - This is the entry point
 * It prints all the single digit base 10 numbers from 0
 * Return: 0 exit status code
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
