#include <stdio.h>
/**
 * main - single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		if (i < 9)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
