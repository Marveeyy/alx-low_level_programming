#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: source of string
 * @dest: destination of the string
 * @n: length of the int
 * Return: pointer to the resulting string
 */

char _*strncpy(char *dest, char *src, int n)

{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
		*(dest + a) = '\0';
	}
	return (dest);
}
