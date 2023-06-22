#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower -  function that checks for lowercase
 * @c: is a lower case
 * Return: 1 if c is lowercase (success)
 */

int _islower(int c)
{
		if  (islower(c))
		{
		return (1);
		}
		else
		return (0);
}
