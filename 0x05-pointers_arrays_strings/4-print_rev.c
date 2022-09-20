#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to print.
 * Return: void
 */

void print_rev(char *s)
{
	int num = 0;

	while (s[num])
	{
	num++;
	}
	while (num--)
	{
	_putchar(s[num]);
	}
	_putchar('\n');
}
