#include "main.h"

/**
 * _print_rev_recursion- print in reverse
 * @s: input pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_recursion(s);
		_putchar('\n');
	}
}
