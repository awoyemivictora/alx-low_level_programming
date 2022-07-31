#include "main.h"

/**
* Function - That allocates memory using malloc
* malloc_checked - Allocates memory using malloc
* @b: The number of bytes to be allocated.
*
* Return: A pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{

	void *memory;

	memory = malloc(b);

	if (memory == 	NULL)
	{
		exit(98);
	}

	return (memory);
}
