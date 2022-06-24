#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: given number or integer
 * Return: factorial
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (-1);
}
