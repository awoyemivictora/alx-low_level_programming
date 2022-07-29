#include "main.h"
#include <stdio.h>

/**
* Function - That allocates memory using malloc
* malloc_checked - Allocates memory using malloc
* @b: The number of bytes to be allocated.
*
* Return: A pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == 	NULL)
	{
		exit(98);
	}

	return (mem);
}
