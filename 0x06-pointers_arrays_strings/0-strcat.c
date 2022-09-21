#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: char
 * @src: char
 * Return: a char
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
