#include "main.h"

/**
 * _strpbrk - Function that look through a string for a matching char
 * @s: a string that we are going to search through
 * @accept: Our list of chars that we are comparing against s
 * 
 * Return: the pointer s as the first location matching accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	s = 0;


	return (s);
}
