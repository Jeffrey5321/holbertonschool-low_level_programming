#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a';  i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
