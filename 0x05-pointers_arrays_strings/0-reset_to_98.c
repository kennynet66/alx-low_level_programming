#include <stdio.h>
/**
 * reset_to_98 - Resets the value it points at to 98
 * @n: Pointer to an interger
 */

void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Changes the value of n to 98 using pointers
 * Return: 0
 */
int main(void)
{
	int n = 402;

	printf("Before the call n is %d\n", n);
	reset_to_98(&n);
	printf("n =%d\n", n);
	return (0);
}
