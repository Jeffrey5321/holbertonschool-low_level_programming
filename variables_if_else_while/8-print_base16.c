#include <time.h>
#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
putchar('\n');
return (0);
}
