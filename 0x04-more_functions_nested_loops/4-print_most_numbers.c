#include "main.h"

/**
 * print_most_numbers - checks for a digit (0 through 9)
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)
{

	if (i == 2 || i == 4)

		i++;

	_putchar(i + '0');

}

_putchar ('\n');

}
