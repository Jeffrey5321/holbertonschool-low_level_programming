# include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowecase.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
