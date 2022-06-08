#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Description: checks for lowercase character and returns 1 if c is lowercase or 0 otherwise
 * Return: always 0
 */
int _islower(int c)
{
if (c > = 97 && c < = 122)
{
return (1);
}
else
{
return (0);
}
