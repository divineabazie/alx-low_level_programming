#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase characters
 *
 *@c: c
 *
 * Return: int
 */

int _islower(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
		x = 1;

	else
		x = 0;

	return (x);


}
