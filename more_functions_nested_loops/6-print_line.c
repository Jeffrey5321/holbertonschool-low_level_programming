# include "main.h"

/**
 * print_line - function that draws a diagonal line on the terminal.
 * @n: is the integer for the parameter of my function.
 *
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
