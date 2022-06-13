#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
