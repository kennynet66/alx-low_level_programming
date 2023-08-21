#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the standard output
 * @c: the character printed
 * Return: On success 1
 */
int _putchar(char c)
{
	write(1, &c, 1)
}
