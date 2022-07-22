#include "main.h"

/**
 * _memcpy - Function that copies n bytes of the pointer src
 * @dest: destination memory area where the string copied is going to be
 * @src: string source that is going to be copied n bytes
 * @n: number of bytes to be copied
 *
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0; /* variable to count till n bytes*/

	while (counter < n) /* while loop to copy strinf from source to dest n bytes*/
	{
		dest[counter] = *src++;
		counter++;
	}

	return (dest);
}
