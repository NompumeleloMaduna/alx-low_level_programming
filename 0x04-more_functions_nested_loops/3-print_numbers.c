#include <stdio.h>
#include "main.h"

/**
 * print_numbers() - prints numbers 0 - 9
 * Description: prints numbers 0 to 9 followed by a new line
 * Return: 0 - 9
 */
void print_numbers(void)
{
        int i;
        i = 0;
        for (i < 10; i++;)
        {
                _putchar(i);
        }

