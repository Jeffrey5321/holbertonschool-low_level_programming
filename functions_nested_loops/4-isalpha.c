#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic character
 * @c : is a letter
 * Return: 1 if c is a letter, lowercase or uppercase (success)
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	return (0);
}
