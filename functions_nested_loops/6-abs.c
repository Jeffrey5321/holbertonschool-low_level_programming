#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - function that computes the absolute value of an integer
 * Return: Always 0 (success)
 * @i : computing the absolut value
 */

int _abs(int i)
{
	if (i < 2)
	{
		int abs_var;

		abs_var = i * -1;

		return (abs_var);
	}

	return (i);
}
