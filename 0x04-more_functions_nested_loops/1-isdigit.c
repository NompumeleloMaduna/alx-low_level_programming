#include "main.h"

/**
 * int _isdigit(int c) - checks if c is a digit
 * @c: character that is checked
 *
 * Return: return 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
