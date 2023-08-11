#include <stdio.h>
/**
 * main - prints a combination of numbers
 * Prints a combo of numbers
 * Return: 0 for code success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
