#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name == name);

		if (d->age == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->age == age);

		if (d->owner == NULL)
			printf("Name: %s\n", d->owner == owner);
	}
}
