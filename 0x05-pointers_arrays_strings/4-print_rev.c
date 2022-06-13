#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0, j = 0;
	char str [500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i ++;
	}
	i - i = 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i++;
	}
	i - i -1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--:
	}
}	
