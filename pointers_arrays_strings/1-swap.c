# include "main.h"
# include <stdio.h>
/**
 * swap_int - swaps the value of two integers.
 * @a: pointer with the original value
 * @b: pointer to change the value of.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
