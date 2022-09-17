#include "main.h"

/**
 * _isdigit - check for digit
 * @c:character to checked for digit
 * Return:0 always
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
