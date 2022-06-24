#include "main.h"

/**
 * sqrt_check - checks the square root
 * @n: number to find sqrt
 * @a: unknowm
 * Return: natural square root or -1
 */

int sqrt_check(int a, int n)
{
	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}
	return (sqrt_check(a + 1, n));
}

/**
 * sqrt_check - checks the square root
 * @n: number to find sqrt
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
