#include "main.h"

/**
 * int _isdigit(int c) - returns 1 if c is a digit
 * @c: character that is checked
 * Description: return 1 if c is a digit and 0 otherwise 
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);
	else
		return (0);
}
