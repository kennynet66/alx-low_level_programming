#include <unistd.h>
/**
 * main - This is where the program execution begins
 * print the string placed in the write arg
 * Return: 1 (Code Exit status)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
