#include <stdio.h>
#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 *
 * @a: first value
 * @b: second value
 *
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;

	printf("a = %p, b = %p", a, b);
}
