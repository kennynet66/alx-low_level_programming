#include "main.h"

/**
 * main - Entry point
 * @argc: index
 * @argv: character array
 * Return: 0 if succesful and 1 if otherwise
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		return (1);
	}
}
