#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints 10 times the alphabet in lowercase.
 *
 * Return: Always 0
 */

print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
	for (y = 'a'; y <= 'z'; y++)
		_putchar(y);
	_putchar('\n')
	}

}
