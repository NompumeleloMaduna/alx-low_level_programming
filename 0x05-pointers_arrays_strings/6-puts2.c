#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character in a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	for (i = 0; *str; str ++)
	{
		if (i++ % 2 == 0)
			_putchar(*str);
	}
}
