#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 * Description: prints numbers 0 to 9 followed by a new line
 * Return: 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
