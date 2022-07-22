#include "main.h"

/**
 * _strstr - Function that finds a string within a string
 * @haystack: The string we are looking into to see if there is a match
 * @needle: Our key string that we are comparing against haystack
 *
 * Return: Location of where the match to need starts
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	char *tmp;

	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			tmp = &haystack[i];
			
			for (j = 1; needle[j]; j++)
			{
				i += 1;

				if (needle[j] == haystack[i])
				{
					if (needle[j + 1] == '\0')
						return (tmp);
				}

				else
				{
					j = 0;
					break;
				}
			}
		}
		else
		{
			i++;
		}
	}
	tmp = 0;

	return (tmp);
}
