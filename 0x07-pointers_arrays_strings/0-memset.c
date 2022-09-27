#include "main.h"
/**
 * _memset -write function that fill memory of constant bytes
 *
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;
	char j = b;
	char *k = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
