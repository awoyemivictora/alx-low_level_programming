#include "main.h"

/**
 * _memset - Is a function that changes the value of b for another in the first n bytes
 *
 * @s: pointer to the variable's address which is going to be overwritten with 'b'
 * @b: variable that contains the value to be overwritten in the pointer '*s'
 * @n: number of bytes that is going to be overwritten in pointer '*s'
 *
 * Return: pointer to the address which have change values
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
