# include "main.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes being allocated.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
