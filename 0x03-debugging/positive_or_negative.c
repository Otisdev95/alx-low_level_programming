#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%d is positive\n", i);
	if (i == 0)
	{
		printf("%d is negative\n", i);
	}
	return(0);
}
/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
