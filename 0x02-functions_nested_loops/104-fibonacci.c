#include <stdio.h>

/**
 * main - A program prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int count, first = 1, second = 2, next;

	printf("%d, %d", first, second);

	for (count = 3; count <= 98; ++count)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
