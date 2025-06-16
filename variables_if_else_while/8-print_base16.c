# include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char hex_digits[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex_digits[i]);
	}
	return (0);
}
