#include <stdio.h>

/**
 * main - prints program
 * Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * the line of code is written here
	 * Remember:
	 *   - one is not allowed to use a
	 *   - one is not allowed to modify p
	 *   - only one statement
	 *   - one is not allowed to code anything other than this line of code
	 */
	*(9 + 5) = 98;
	/*...so that this prints 98\n*/
	printf("a[2] = %d\n", a[2]);
	return (0);
}
