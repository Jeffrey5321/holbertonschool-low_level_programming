# include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: is the character to verify.
 *
 * Return: 1 if n is > than 0, 0 if n = 0, -1 if n is < than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
