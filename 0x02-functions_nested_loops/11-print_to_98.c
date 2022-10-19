#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *@n: n
 * Return: Always 0
 */

void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
	for (x = n; x >= 98; x--)
	{
	printf("%d", x);
	if (x != 98)
	{
	printf(",");
	}
	}
	}
	else
	{
	for (x = n; x <= 98; x++)
	{
	printf("%d", x);
	if (x != 98)
	{
	printf(",");
	}
	}
	}
	printf("\n");

}
