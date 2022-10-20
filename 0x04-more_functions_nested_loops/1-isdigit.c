#include <stdio.h>
#include "main.h"

/**
 *_isdigit - a function that checks for a digit
 *
 *@c: c
 *Return: int
 */

int _isdigit(int c)
{
	int x;

	if (c <= 9)
		x = 1;
	else
		x = 0;

	return (x);

}
