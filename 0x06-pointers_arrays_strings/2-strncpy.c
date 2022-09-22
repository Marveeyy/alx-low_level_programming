#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: source of string
 * @dest: destination of the string
 * @n: length of the int
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
	dest[index] = '\0';
	}
	return (dest);
}


