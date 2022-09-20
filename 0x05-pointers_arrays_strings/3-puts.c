#include "main.h"

/**
 * _puts - prints string of a number followed by a line
 *
 * *@str: the string to print.
 * Return: void
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
	_putchar(str[num]);
	}
	_putchar('\n');
}
