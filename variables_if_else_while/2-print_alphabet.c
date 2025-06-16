# include <stdio.h>

/**
 * main - This function prints the lowercase letters of the
 * alphabet followed by a new line.
 *
 * Return: (0)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
