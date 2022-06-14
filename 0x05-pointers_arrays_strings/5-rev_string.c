#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
