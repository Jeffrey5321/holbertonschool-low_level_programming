#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: input string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 0, result = 0, index = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
	if (s[index] == '-')
	{
	sign++;
	}
	if (s[index] >= '0' && s[index] <= '9')
	{
	while (s[index] >= '0' && s[index] <= '9')
	{
	result = result * 10 + (s[index] - '0');
	index++;
	}
	break;
	}
	}
	return (result * (sign % 2 == 0 ? 1 : -1));
}
