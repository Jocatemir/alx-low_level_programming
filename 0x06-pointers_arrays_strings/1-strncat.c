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
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	a++;
	while (src[b] < n)
	{
	dest[a] = src[b];
	if (src[b] == '\0')
	{
	break;
	}
	b++;
	a++;
	}
	return (dest);
}
