#include <stdio.h>
#include "main.h"

/**
 * main - print the alphabets
 *
 * Return: Always(0)
 */

void print_alphabet(void);
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
		_putchar('\n');

	return (0);

}

