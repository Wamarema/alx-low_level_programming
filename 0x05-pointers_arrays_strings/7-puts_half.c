#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		len = (len - 1) / 2;
	}
	else
	{
		len /= 2;
	}

	for (i = len; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

