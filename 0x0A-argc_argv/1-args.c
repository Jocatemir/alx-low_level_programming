#include <stdio.h>

/**
 * main - A program that Prints the number of arguments passed to it.
 * @argc: Input arguments
 * @argv: An array of pointers to the arguments.
 * Return: 0 always.

*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
