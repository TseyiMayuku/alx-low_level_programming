#include <stdio.h>

/**
 * main - replace multiples of 3 and 5
 *
 * Return: Always 0. 
 */

int main(void)
{
	int i;


	for (i = 1; 1 <= 100; i++)

	{
		if (i % 3 == 0 && (i % 5 == 0)

			printf("%s", "FizzBuzz");


		else if (i % 3 == 0)

			printf("%s", "Fizz");


		else if (i % 5 == 0)

			printf("%s", "Buzz");

		else

			printf("%d", i);

		if (i != 100)

			printf(" ");

	}
	printf("\n");

	return (0);
}
