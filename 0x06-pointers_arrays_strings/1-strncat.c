#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 *
 * @src: source of string
 * @dest: destination of the string
 * @n: length of the int
 * Return: pointer of the returning string
 */

char _strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
