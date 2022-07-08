#include <stdio.h>

/** 
 * main - Prints the alphabet at reverse
 * Followed by new line
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
