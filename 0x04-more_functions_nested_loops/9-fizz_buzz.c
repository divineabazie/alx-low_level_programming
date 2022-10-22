#include <stdio.h>
#include "main.h"

/**
 * main - print fizz for multiples of 3 and buzz for multiples of 5
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 100; x <= 100; x++)
	{
	if (x % 3 == 0 && x % 5 == 0)
		printf("FizzBuzz");

	else if (x % 5 == 0)
		printf("Buzz");

	else if (x % 3 == 0)
		printf("Fizz");

	else
		printf("%d", x);

	if (x < 100)
		printf(" ");
	}

	printf("\n");

	return (0);
}
