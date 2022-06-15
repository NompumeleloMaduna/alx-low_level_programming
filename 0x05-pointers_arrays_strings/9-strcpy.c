#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string including null byte
 * @src: source to be copied
 * @dest: destination of the copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
