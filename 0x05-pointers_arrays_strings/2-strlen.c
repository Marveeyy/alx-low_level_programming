#include "main.h"

/**
 * _strlen - Function that returns the length of string
 *
 * @s: s as a character
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
