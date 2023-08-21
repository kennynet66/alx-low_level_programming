#include <stdio.h>
/**
 * swap_int - swaps the values of the ints
 * @a: Int input pointer
 * @b: Int input pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
