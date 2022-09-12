#include <stdio.h>
/**
 * main - writing all the letter of the alpabet except e and q
 *
 *   * Return: 0 always (success)
 *
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	if (i != 'e' && i != 'q')
	{
	putchar(i);
	}
	i++;
	}
	putchar('\n');
	return (0);
}
