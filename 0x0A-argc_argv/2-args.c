#include <stdio.h>

/**
 * main - Function program that Prints all arguments
 * @argc: Input arguments
 * @argv: An array of pointers
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	printf("%s\n", argv[arg]);
	return (0);
}
