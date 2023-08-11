#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - It will assign a new number to variable n each time it is executed
 * This is where the
 * The program uses time.h header file
 * Return: 0  for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
