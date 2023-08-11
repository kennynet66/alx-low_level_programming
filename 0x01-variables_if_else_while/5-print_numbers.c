#include <stdio.h>
/**
 * main - this is the entry point
 * This code prints numbers from 0-9
 * Return: 0 success exit status
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
