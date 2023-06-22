#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char c = 0;

	while (c <= 9)
	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	putchar('\n');
	}
}
