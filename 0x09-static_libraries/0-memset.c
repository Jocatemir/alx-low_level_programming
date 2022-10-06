#include "main.h"
/**
 * _memset -write function that fill memory of constant bytes
 * @n: number of memory
 * @b: number of bytes
 * @s: number of pointer
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
