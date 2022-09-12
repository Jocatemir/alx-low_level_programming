#include <stdio.h>
/**
 * main - just wat to write letter a -z
 *
 * Return: 0 always (success)
 *
 */

int main(void)
{
	char j = 'a';

	while (j <= 'z')

	{
	putchar(j);
	j++;
	}
	putchar(10);
	return (0);
}
