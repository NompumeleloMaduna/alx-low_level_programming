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
	char str[] = "_putchar";
	int i = 0;

	while (i < 9)
	{
	_putchar(str[i]);
	i++;
	}
	return (0);
}