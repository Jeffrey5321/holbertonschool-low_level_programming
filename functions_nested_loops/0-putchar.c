#include "main.h"
#include <unistd.h>

/**
 * main - write a program that prints _putchar.
 *
 * Return: Always 0
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i;

	for (i = 0; message[i] != '\0'; i++)
	{
		_putchar(message[i]);
	}
	return (0);

}
