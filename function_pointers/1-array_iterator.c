#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h> /* For size_t */

/**
 * array_iterator-Executes a fnctn given as parameter on each elmnt from array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function you need to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
