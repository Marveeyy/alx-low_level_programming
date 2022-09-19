#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int a = 0;
	int b = 0;
	int c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
			break;
		b += a;
		c++;
		printf("%c", a);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
