#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the two matrix diagonals
 * @a: The matrix of ints
 * @size: The size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum 0 = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum0 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum0, sum1);
}
