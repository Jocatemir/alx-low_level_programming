#include <stdio.h>
/**
 * main - printing numbers in 2's
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int j;
	int z;

	for (j = 0; j <= 98; j++)
	{
	for (z = j + 1; z <= 99; z++)
	{
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	putchar(' ');
	putchar((z / 10) + '0');
	putchar((z % 10) + '0');
	if (j == 98 && z == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
