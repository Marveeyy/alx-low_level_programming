#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Returns: returns nothing
 */

void print_square(int size)
{
	int l, c;

	if (size <= 0)
		_putchar('\n');

	for (l = 0; l < size; l++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

