#include <stdio.h>
#include "main.h"

/**
 * main - Prints the names of the program
 * @argc: Counts the arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
