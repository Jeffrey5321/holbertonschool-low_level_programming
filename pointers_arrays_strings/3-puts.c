# include "main.h"
# include <stdio.h>

/**
 * _puts - function that prints a string.
 *@str: arg s
 *
 * Return: string to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
