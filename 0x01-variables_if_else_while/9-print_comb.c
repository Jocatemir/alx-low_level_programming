#include<stdio.h>
/**
 * main - writing all single digit number
 *
 * Description:writing all single digit number
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar((i % 10) + '0');
	if (i == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
