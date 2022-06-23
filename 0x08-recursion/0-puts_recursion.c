#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Return: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n';
	}
		else 
		_puts_recurion(s + 1);
}	
