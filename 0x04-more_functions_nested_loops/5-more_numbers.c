#include "main.h"

/**
 * more_numbers - Print the numbers 0 to 14, ten times
 *
 * Return: numbers 0 to 14, ten times, followed by a new line
 *
 */

void more_numbers(void)
{
	int 1, c;

	for (1 = 0; 1 < 10; 1++)
	{
		for (c = 0; c <= 14, c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
