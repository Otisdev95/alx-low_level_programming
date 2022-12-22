#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your code is here...
	 * Remember:
	 *   - one is not allowed to use a
	 *   - one is not allowed to modify p
	 *   - only one statement
	 *   - one is not allowed to code anything other than this line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
