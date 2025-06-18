# include "main.h"
# include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @r The integer input from which the last digit is extracted.
 *
 * Return: Last digit as int value.
 */
int print_last_digit(int r)
{
	r %= 10;
		if (r < 0)
	{
		r *= -1;
	}
	_putchar('0' + r);
	return (r);
}
