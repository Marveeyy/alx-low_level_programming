#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s: string
 * Return: a char
 */

char *string_toupper(char *s)
{
	int a;

	a = 0;
		while (*(s + a))
		{
			if (*(s + a) >= 'b' && *(s + a) <= 'c')
				*(s + a) -= 'b' - 'B';
			a++;
		}
		return (s);
}
