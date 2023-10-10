#include <stdio.h>

/**
 * main - prints the first 52 Fibonacci numbers
 * Return: Nothing!
 */

int main(void)
{
	int first = 1, second = 2, next, i;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 50; ++i)
	{
		next = first + second;
		printf("%d", next);

		if (i != 50)
		{
			printf(", ");
		}

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
