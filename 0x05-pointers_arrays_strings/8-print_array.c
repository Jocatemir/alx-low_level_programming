#include "main.h"

#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers (task 9)
 *
 * @a: int type array pointer
 * @n: int type integer
 *    Description: Numbers must be separated by comma and space
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
