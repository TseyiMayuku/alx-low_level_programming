#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char low, e, q;

	for (low = 'a'; low <= 'z'; low++)
	
	{
		e = 'e'; 
		q = 'q';

		if (low != e && low != q)
		putchar(low);

	}

	putchar('\n');

	return (0);

}
