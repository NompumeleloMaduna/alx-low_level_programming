#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: prints alphabet ten times in lower case
 * Return: always 0
 */

void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
