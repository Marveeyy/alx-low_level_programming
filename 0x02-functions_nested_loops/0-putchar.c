#include <main.h>
#include <stdio.h>
/**
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *complete = "_putchar";

	while (*complete)
	{
		putchar(*complete);
	}
	putchar('\n');
	return (0);
}
