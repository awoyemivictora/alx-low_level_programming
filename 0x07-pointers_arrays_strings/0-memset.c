#include "main.h"

/**
 * _memset - Function that changes the value of b for another in the first n bytes
 *
 * @s: pointer to the variable's address to be overwritten with 'b'
 * @b: variable that contains the value to be overwritten in the pointer '*s'
 * @n: number of bytes to be overwritten in pointer '*s'
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		/*s position should raise and overwritten n */
		s[counter] = b;
		counter++;
	}

	return (s);
}
