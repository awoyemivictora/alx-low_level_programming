#include "main.h"

/**
 * _puts_recursion - Function that print a string
 * @s: pointer to char
 *
 * Return: NULL
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
			return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
