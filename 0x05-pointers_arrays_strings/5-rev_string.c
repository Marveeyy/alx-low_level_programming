#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: a char
 *
 * Return: Always 0 (Success)
 *
 */
void rev_string(char *s)
{
	int x = 0, y, z;
	char a;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		a = s[y];
		s[y] = s[z];
		s[z] = a;
	}
}
