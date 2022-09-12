#include<stdio.h>
/**
 * main - writing two different number
 *
 * Description: print 3 combination of numbers
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int i;
	int j;
	int z;

	for (i = 0; i < 8; i++)
	{
	for (j = 1; j < 9; j++)
	{
	for (z = 2; z < 10; z++)
	{
		putchar((i % 10) + '0');
		putchar((j % 10) + '0');
		putchar((z % 10) + '0');
		if (i == 7 && j == 8 && z == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
