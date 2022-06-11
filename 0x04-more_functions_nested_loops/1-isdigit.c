#include "main.h"
/**
 *_isdigit - checks for a digit
 *Description:0 through 9
 *@c:character checked
 *Return:if c is a digit 1 or  0  otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
