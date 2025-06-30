# include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
