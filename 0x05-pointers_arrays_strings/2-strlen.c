#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns a string's length
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i])

		i++;

	return (i);
}
