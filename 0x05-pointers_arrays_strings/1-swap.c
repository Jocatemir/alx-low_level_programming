#include "main.h"

#include <stdio.h>

/**
 * swap_int -Write program to swap the value of two integer
 *
 * @a: The first variable to be swapped
 * @b: The second variable to be swapped
 * Return: void on success
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
