#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: pointer char
 * @dest: pointer char
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n; b++)
	{
	dest[a + b] = src[a];
	if (src[b] == '\0')
	b = n;
	}
	return (dest);
}
