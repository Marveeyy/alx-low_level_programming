#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n element of an array of integers
 * @a: pointer to integer
 *
 * @n: integer
 *
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
		if (c != n - 1)
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
	printf("\n");
}
