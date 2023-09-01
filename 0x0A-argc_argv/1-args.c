#include "main.h"

/**
 * main - Entry point
 * @argc: index
 * @argv: arguments on the commandline
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
