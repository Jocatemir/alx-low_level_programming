#include "main.h"

/**
 * _strspn - function that get the length of a prefix
 * @accept: bytes source
 * @s: initial segment
 * Return: number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, n, v, c;

	v = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[a])
			{
				v++;
				c = 1;
			}
		}
	if (c == 1)
	return (v);
	}
		return (v);
}
