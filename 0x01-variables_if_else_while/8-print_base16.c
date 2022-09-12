#include<stdio.h>
/**
 * main - writing all the number for base 16
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int z = 0;

	while (z < 48)
	{
	if (z < 10)
	putchar(z + '0');
	else if (z > 41)
	putchar (z - 10 + 'A');
	z++;
	}
	putchar(10);
	return (0);
}
