#include <stdio.h>

#include "main.h"

/**
 * _strlen - Function to return the lenght of a string
 *
 * @s: This is the parameter/ arguement to be counted
 * Return: int on success
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
	{
	count++;
	}
	return (count);
}
