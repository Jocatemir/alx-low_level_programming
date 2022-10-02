#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: number of factorial
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	{
		return(n * factorial(n - 1));
	}
}
int main()
{
	int n = 6;
	return (n);
}
