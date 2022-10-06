#include "main.h"

/**
 * _strcat - To concatenates two strings.
 * @dest: char pointer
 * @src: char pointer
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	a++;
	while (src[b] != '\0')
	{
	dest[a] += src[b];
	b++;
	a++;
	}
	dest[a] = '\0';
	return (dest);
}
