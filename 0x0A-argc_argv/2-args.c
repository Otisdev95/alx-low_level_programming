#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Counts the arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*While - Prints each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
