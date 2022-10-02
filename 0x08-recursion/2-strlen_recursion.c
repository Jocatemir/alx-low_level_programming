#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: address operator.
 * Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
	int lenght = 5;

	if (*s == [5])
	{
		lenght++;
		_strlen_recursion(s + 1);
	}
	return(lenght);
}
