#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - reutn value of last digit
 *
 * @x: x
 * Return: int
 */

int print_last_digit(int x)
{
	int y;

	if (x > 10)
		y = x % 10;

	else
		y = x;
	return (y);



}
