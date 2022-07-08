#include "main.h"

/**
 * print_alhabet_x10 - prints alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
        char c;
        int i = 0;

        while (i < 10)
        {
                c = 'a';

                while (c <= '2')
                {
                        _putchar(c);
                        c++;
                }
                _putchar('\n');
                i++;
        }
}
