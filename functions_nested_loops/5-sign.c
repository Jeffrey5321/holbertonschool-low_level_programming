#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_sign - function that prints the sign of a number
 * @n: prints the sign
 * Return: 1+ 0 print 0 1- if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	putchar (43);
	return (1);
	}
	else if (n < 0)
	{
	putchar (45);
	return (-1);
	}
	else
	{
	putchar (48);
	return (0);
	}
	putchar('\n');
}
