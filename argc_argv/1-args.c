# include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 *
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
