#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: prints the alphabet in lowercase followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
