#include "main.h"
# include <stdio.h>

/**
 * main - concatinate the values of two integers.
 * @dest: arg a
 * @src: arg b
 *
 * Return: void.
 */
int main(void)
{
	char s1[100] = "Hello, ";
	char s2[] = "World!";
	char *ptr;

	ptr = _strcat(s1, s2);
	printf("%s\n", ptr);
	return (0);
}
