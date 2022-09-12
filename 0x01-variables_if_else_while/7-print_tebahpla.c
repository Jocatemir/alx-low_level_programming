#include <stdio.h>
/**
 * main - writing the letter of the alphabet backward
 *
 * Return: 0 always
 *
 */

int main(void)
{
	char j = 'z';

	while (j >= 'a')

	{
	putchar(j);
	j--;
	}
	putchar(10);
	return (0);
}
