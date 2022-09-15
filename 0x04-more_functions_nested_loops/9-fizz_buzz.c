#include "main.h"
#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 1;
	_putchar("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
		_putchar("FizzBuzz");
		}

		else if (n % 3 == 0)
		{
		_putchar("Fizz");
		}

		else if (n % 5 == 0)
		{
		_putchar("Buzz");
		}

		else
		{
		_putchar("%d", n);
		}
	}
	_putchar("\n");

	return (0);
}
