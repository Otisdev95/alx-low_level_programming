#include "dog.h"

/**
 * init_dog - initilizes a variable of two type struct dog.
 * @d: pointer to struct type dog.
 * @name: pointer to char name of dog.
 * @age: pointer to float age of dog.
 * @owner: pointer to char owner of dog.
 *
 * Return: No.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
