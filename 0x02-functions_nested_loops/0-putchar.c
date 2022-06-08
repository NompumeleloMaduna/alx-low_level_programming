#include <stdio.h>
#include "main.h"
/**
* _putchar - prints _putchar
*
* Description: prints _putchar
* Return: returns 0
*/
int main(void)
{
char str[] = "_putchar";
int i = 0;

while (i < 10)
{
_putchar(str[i]);
i++;
}
return (0);
}
