#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet_x10(void) - prints 10 times the alphabet in lowercase.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void);
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
	for (y = 'a'; y <= 'z'; y++)
		_putchar(y);
	_putchar('\n');
	}

}
