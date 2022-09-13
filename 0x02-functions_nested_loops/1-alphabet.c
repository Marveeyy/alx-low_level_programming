#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		-putchar(letter);

	putchar('\n');
}
