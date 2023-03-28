#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	/* count the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* print the string in reverse order */
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}

