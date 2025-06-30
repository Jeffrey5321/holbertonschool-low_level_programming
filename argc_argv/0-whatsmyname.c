# include <stdio.h>

/**
 * main - argument count
 * @argc: the number of command line arguments
 * @argv:: Array containing the program command line arguments
 * Write a program that prints the name
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s", argv[0]);

	return (0);
}
