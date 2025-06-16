# include <stdio.h>

/**
 * main - prints alphabet in lowercase and in uppercase.
 *
 * Return (0);
 */
int main(void)
{
	char c1;

	for (char c1 = 'a' ; c1 <= 'z' ; c1++)
	{
		putchar(c1);
	}
	char c2;

	for (char c2 = 'A' ; c2 <= 'Z' ; c2++)
	{
		putchar(c2);
	}
	putchar('\n');

	return (0);
}
