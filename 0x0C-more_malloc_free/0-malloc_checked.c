#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
