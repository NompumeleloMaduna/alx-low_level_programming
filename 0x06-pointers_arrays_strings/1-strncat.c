#include "main.h"

/**
 * strncat - concatenates two strings
 * using n bytes from src 
 * and src does not need null-termination
 * @src: string appended to dest
 * @dest: string to be appended
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] &&  index < n; index++)
		dest[dest_len++] = src[index];

		return (dest);
}
