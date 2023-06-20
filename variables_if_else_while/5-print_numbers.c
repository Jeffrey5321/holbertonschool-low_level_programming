#include <stdio.h>
/**
 * main - single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		if (i < 9)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
