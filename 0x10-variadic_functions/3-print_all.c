#include "variadic_functions.h"

/**
 * print_string - Print a string
 * @list: List of arguments
 **/
void print_string(va_list list)
{
	char *aux;

	aux = va_arg(list, char*);
	if (aux == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", aux);
}

/**
 * print_integer - Print a integer
 * @list: List of arguments
 **/
void print_integer(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - Print a float
 * @list: List of arguments
 **/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - Print a char
 * @list: List of arguments
 **/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
