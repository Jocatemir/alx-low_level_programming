#include "main.h"

/**
 * _memcpy - function to lacate character
 * @dest: destination
 * @src: memory
 * @n: bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
