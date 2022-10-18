#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for alphabetical character
 *
 * @n: n
 *
 * Return: int
 */

int print_sign(int n)
{
	int x;
	int y;

	if (n == 0)
		x = 0, y = 0;

	else if (n > 0)
		x = 1, y = '+';

	else
		x = -1, y = '-';

	_putchar(y);

	return (x);

}
