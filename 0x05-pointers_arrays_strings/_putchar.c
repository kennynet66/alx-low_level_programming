#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the standard output
 * @c: the character printed
 * Return: nothing
 */
int _putchar(char c)
{
	write(1, &c, 1)
}
