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


	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
		printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
		printf("Fizz");
		}

		else if (i % 5 == 0)
		{
		printf("Buzz");
		}

		else
		{
		printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
