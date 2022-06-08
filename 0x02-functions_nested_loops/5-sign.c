#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: number checked
 *
 * Return: 1 and + if n > 0, 0 if n = 0 and -1 and - if n<0
 */

int print_sign(int n)
{
if( n > 0)
{
return (1);
_putchar(43);
}
else if (n < 0)
{
return (0);
_putchar(48);
}
else if (n < 0)
{
return (-1);
_putchar(45);
}
