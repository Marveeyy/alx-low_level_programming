#include "main.h"
/**
 * print_sign - print the sign of number
 * @n: type int integer, can be positive or negative
 * Description: print +, 0, or - depending on number along with return
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	i}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
