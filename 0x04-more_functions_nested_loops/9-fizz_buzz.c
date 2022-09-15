#include "main.h"
#include <stdio.h>

/**
 * main - prints Fizz Buzz each numbers of 3 and 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 1;
	_putchar("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
		_putchar("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
		_putchar("Fizz");
		}

		else if (i % 5 == 0)
		{
		_putchar("Buzz");
		}

		else
		{
		_putchar("%d", i);
		}
	}
	_putchar("\n");

	return (0);
}
