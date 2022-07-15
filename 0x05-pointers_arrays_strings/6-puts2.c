#include "main.h"

/**
* puts2 - puts2 function
* @str: str parameter
*
* Return: Always (0);
*/

void puts2(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while (*(str + 1) != '\0')
		{
			if (i % 2 == 0)
				_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
