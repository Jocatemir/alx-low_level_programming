#include "main.h"

#include <stdio.h>

/**
 * main - print the sum of two diagonal matrix
 *
 * Return: 0 always
 */

void print_diagsums(int *a, int size)
{
	int a2 [2][2] = {
		{0 1}
		{3 4}
	};
	print_diagsum((int *)a2, 2);
	return (0);
}
