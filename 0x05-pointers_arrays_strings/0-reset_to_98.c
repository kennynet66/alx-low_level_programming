#include "main.h"
/**
 * main - changes the value of n to 98 using pointers
 * reset_to_98 - Resets the value it points at to 98
 * Return: Always 0
 */

int main(void)
{
	int n = 402;

	printf("Before the call n is %d\n", n);
	reset_to_98(&n);
	printf("n =%d", n);
}

void reset_to_98(int *n)
{
	*n = 98;
}
