#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * @dest: a char
 * @src: a char
 * Return: Always 0 (Success)
 *
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
