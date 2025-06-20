# include "main.h"
# include <stdio.h>

/**
 * _isdigit - checks for a digit.
 * @c: is the integer for the parameter of my function.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
