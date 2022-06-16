#include "main.h"

/**
 * strcat - concatenates the src string  to dest
 * @src: Source string
 * @dest: Pointer to the string to be concatenated
 * Return: Pointer to dest
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
