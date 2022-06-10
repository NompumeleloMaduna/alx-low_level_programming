#include "main.h"

/**
 * int _isdigit(int c) - returns 1 if c is a digit
 * @c: character that is checked
 * Description: returns 1 if c is a digit or 0 otherwise
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
		return (1);
	return (0);
}
