#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
