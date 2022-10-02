#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: address operator.
 * Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		_strlen_recursion(s + 1);
	}
	return(l);
}
