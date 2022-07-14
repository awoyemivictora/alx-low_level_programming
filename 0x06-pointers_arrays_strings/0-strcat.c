#include "main.h"

/**
 * main - Function that appends the src string to the dest.
 * Overwriting the terminating null byte (/0) at the end of dest
 *
 * Return: Always (0);
 */

char *_strcat(char *dest, char *src);
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
