#include <stdio.h>
#include "dog.h"

/**
 * print_dog - unction that prints a struct dog.
 * @d: pointer element to dog struct.
 * Description: This function prints the members of a struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n",d->age);
		printf("Owner: %s\n",d->owner);
	}
}
