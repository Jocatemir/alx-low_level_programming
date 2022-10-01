#include <stdio.h>

/**
 * main - A program that Prints all arguments it receives.
 * @argc: Input arguments 
 * @argv: An array of pointers 
 * return: Always 0.
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	printf("%s\n", argv[arg]);
	return (0);
}
