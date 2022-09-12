#include <stdio.h>
/**
 * main - write out the alphabet in lower and upper case
 * Return:always 0 (success)
 *
 */

int main(void)
{
	char i = 'a';
	char j = 'A';

	for (i = 'a' ; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (j = 'A' ; j <= 'Z'; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
