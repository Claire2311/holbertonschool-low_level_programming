#include <stdio.h>

/**
 * print_array - function that print an array
 * @a: int array content
 * @n: int the number of element
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
