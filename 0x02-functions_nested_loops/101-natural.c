nclude <stdio.h>

/**
 * main -finding the multiple of 5
 *
 * Return: always 0
 */

int main(void)

{
	int num = 0, sumOf;
	while (num < 1024)
	{
	num++;
	if (num % 5 == 0 || num % 3 == 0)
	{
	sumOf += num;
	}
	}
	printf("%d", sumOf);
	printf("\n");
	return (0);
}
