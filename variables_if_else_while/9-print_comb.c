#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i + '0');
	}
putchar(',');
putchar(' ');
return (0);
}
