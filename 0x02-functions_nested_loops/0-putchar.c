#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: prints holberton
 * Return: returns 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (i < 10)
	{
	_putchar(str[i]);
	i++;
	}
	return (0);
}
