# include "main.h"
# include <stdio.h>

/**
 * print_rev - prints a string in reverse.
 * @s: arg s
 *
 * Return: a string in reverse.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
