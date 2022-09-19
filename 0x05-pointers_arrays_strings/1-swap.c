#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @m: takes an int
 *
 * @n: takes an int
 * Return: Always 0 (Success)
 */
void swap_int(int *m, int *n)
{
	int a = *m;

	*m = *n;
	*n = a;
}
