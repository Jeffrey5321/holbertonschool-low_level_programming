# include "main.h"
# include <ctype.h>

/**
 * _islower - function that checks for lowercase character.
 *@c: The character to verify.
 *
 * Return: 1 if c is lowercase, 0 if c is uppercase.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
