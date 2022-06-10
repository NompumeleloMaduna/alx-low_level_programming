#include "main.h"

/**
* i_supper - checks for uppercase
* @c: character being checked
* Description: returns 1 if c is uppercase 
* Return: 0
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}

return (0);
}
