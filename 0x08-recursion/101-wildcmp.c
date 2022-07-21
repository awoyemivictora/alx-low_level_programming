#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: String 2. It can contain a * as as a special character.
 * Return: 1 if the strings can be considered idential, if not return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*21 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s2 + 1, s2));
	}

	return (0);
}
