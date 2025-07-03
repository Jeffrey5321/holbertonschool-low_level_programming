#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *@str: arg string
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *arr;
	int lenght, n;

	if (str ==  NULL)
	{
		return (NULL);
	}

	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	arr = malloc((lenght + 1) * sizeof(char));
	if (arr == NULL)
	{
		printf("error allocationg");
		return (NULL);
	}
	for (n = 0; n < lenght; n++)
	{
		arr[n] = str[n];
	}
	arr[n] = '\0';
	return (arr);
}
