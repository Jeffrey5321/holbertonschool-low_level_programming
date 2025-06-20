# include "main.h"
# include  <stdio.h>

/**
 * _isupper - function that checks for uppercase characters.
 * @c: the int for the parameters of my function.
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
