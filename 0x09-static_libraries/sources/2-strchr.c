#include "main.h"
#include <stdio.h>

/*
 * _strchr - Function that locates a character in a string
 * @s: string which contain the c character
 * @c: character which is being searched in the string s
 *
 * Return: string after the c character or NULL if it's not there
 */

char *_strchr(char *s, char c)
{
	int counter = 0;

	while (s[counter] != '\0') /* The while loop is to go all the way of the strings */
	{
		if (s[counter] == c) /* if the string found the character*/
		{
			return (s + counter); /* start printing from the s[counter] taken as 0*/
		}
		counter++;
	}

	if (c == '\0')
	{
		return (s + counter);
	}

	return (NULL);
}
