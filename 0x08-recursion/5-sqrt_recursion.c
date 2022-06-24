#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find sqrt
 * @a: unknowm
 * Return: natural square root or -1
 */

int sqrt_check(int a, int c)
{
	if (a * a == c)
	{	
		return (a);
	}
	if (a * a > c)
	{	
		return (-1);
	}
	return (sqrt_check(a + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}

	
